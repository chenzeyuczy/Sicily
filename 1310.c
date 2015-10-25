#include <stdio.h>
#include <malloc.h>

struct node {
    node *left, *right;
    int key;
};

node *head, *tem;

void insert(node *root, int value) {
    tem = root;
    while (1) {
        if (value <= tem->key) {
            if (tem->left == NULL) {
                tem->left = (node*)malloc(sizeof(node));
                tem = tem->left;
                break;
            }
            tem = tem->left;
        } else {
            if (tem->right == NULL) {
                tem->right = (node*)malloc(sizeof(node));
                tem = tem->right;
                break;
            }
            tem = tem->right;
        }
    }
    tem->key = value;
    tem->left = tem->right = NULL;
}


void inorder(node *root) {
    if (root == NULL)
        return;
    inorder(root->left);
    printf(" %d", root->key);
    inorder(root->right);
}

void preorder(node *root) {
    if (root == NULL)
        return;
    printf(" %d", root->key);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) {
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf(" %d", root->key);
}

int main() {
    int n, num, count = 0;
    while (scanf("%d", &n) != EOF) {
        if (count++)
            printf("\n");
        head = NULL;
        for (int i = 0; i < n; i++) {
            scanf("%d", &num);
            if (head == NULL) {
                head = (node*)malloc(sizeof(node));
                head->key = num;
                head->left = head->right = NULL;
                continue;
            }
            insert(head, num);
        }
        printf("Inorder:");
        inorder(head);
        printf("\n");
        printf("Preorder:");
        preorder(head);
        printf("\n");
        printf("Postorder:");
        postorder(head);
        printf("\n");
    }
    return 0;
}
