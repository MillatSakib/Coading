#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node {
    int data;
    struct node* left;
    struct node* right;
};

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

/* Given a binary tree, print its nodes in postorder */
void printPostorder(struct node* node) {
    if (node == NULL)
        return;

    /* first recur on left child */
    printPostorder(node->left);

    /* then recur on right child */
    printPostorder(node->right);

    /* now print the data of node */
    printf("%d ", node->data);
}

/* Driver program to test above functions */
int main() {
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);

    getchar();
    return 0;
}
