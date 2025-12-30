#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* createnode(int value){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node* root,int value){
    if(root==NULL){
        return createnode(value);
    }
    if(value<root->data)
    root->left=insert(root->left,value);
    else if(value>root->data)
    root->right=insert(root->right,value);
    return root;
}
void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
int main(){
    struct node* root=NULL;
    int n,value;
    printf("Enter number of nodes to insert: ");
    scanf("%d",&n);
    printf("Enter %d values:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        root=insert(root,value);
    }
    printf("Postorder traversal of BST: ");
    postorder(root);
    return 0;
}
