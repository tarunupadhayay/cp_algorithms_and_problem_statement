#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    char data[100];
    struct node* left;
    struct node* right;
};

struct node* createNode(const char* d) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    strcpy(newNode->data, d);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* buildTree(struct node* root, int level) {
    if (level == 1) {
        printf("Enter City: \n");
    } else if (level == 2) {
        printf("Enter Sub Urban: \n");
    } else {
        printf("Enter Corporations: \n");
    }

    char data[100];
    scanf("%s", data);
    root = createNode(data);

    if (strcmp(data, "-1") == 0) {
        return NULL;
    }

    if (level == 2 || level == 1) {
        printf("Enter sub urban for inserting in left: %s\n", data);
        root->left = buildTree(root->left, level + 1);

        printf("Enter sub urban for inserting in right: %s\n", data);
        root->right = buildTree(root->right, level + 1);
    } else {
        printf("Enter Corporations for inserting in left: %s\n", data);
        root->left = buildTree(root->left, level + 1);

        printf("Enter Corporations for inserting in right: %s\n", data);
        root->right = buildTree(root->right, level + 1);
    }

    return root;
}

void traversal(struct node* root) {
    if (root == NULL) {
        return;
    }

    printf("%s ", root->data);
    traversal(root->left);
    traversal(root->right);
}

int findPath(struct node* root, char path[][100], const char* k, int index) {
    if (root == NULL) {
        return 0;
    }

    strcpy(path[index], root->data);
    index++;

    if (strcmp(root->data, k) == 0) {
        return 1;
    }

    if ((root->left && findPath(root->left, path, k, index)) ||
        (root->right && findPath(root->right, path, k, index))) {
        return 1;
    }

    return 0;
}

const char* findLCA(struct node* root, const char* n1, const char* n2) {
    char path1[100][100], path2[100][100];
    int path1Found = findPath(root, path1, n1, 0);
    int path2Found = findPath(root, path2, n2, 0);

    if (!path1Found || !path2Found) {
        return "no";
    }

    int i;
    for (i = 0; strcmp(path1[i], path2[i]) == 0; i++)
        ;

    return path1[i - 1];
}

int hasPath(struct node* root, char path[][100], const char* x, int index) {
    if (!root) {
        return 0;
    }

    strcpy(path[index], root->data);
    index++;

    if (strcmp(root->data, x) == 0) {
        return 1;
    }

    if (hasPath(root->left, path, x, index) || hasPath(root->right, path, x, index)) {
    return 1;
    }

    return 0;
}

void printPath(struct node* root, const char* x) {
    char path[100][100];
    int pathFound = hasPath(root, path, x, 0);
    if (pathFound) {
    for (int i = 0; i < pathFound - 1; i++) {
        printf("%s ", path[i]);
    }
    printf("%s ", path[pathFound - 1]);
    } 
    else {
        printf("No Path");
    }
}

int main() {
struct node* root = NULL;
root = buildTree(root, 1);
traversal(root);
printf("\n");
printf("Enter 2 nodes which you have to find common points: ");
char a[100], b[100];
scanf("%s", a);
scanf("%s", b);
const char* x = findLCA(root, a, b);
printPath(root, x);
return 0;
}


