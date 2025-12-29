#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head = NULL;
void append(int data){
    struct node*newNode = malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node*temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newNode;
       
    }
}
void deleteAtPos(int pos){
    struct node *temp = head;
   
    if(pos==1){
        head = temp -> next;
        free(temp);
        return;
    }
    for(int i = 1; i < pos-1 ; i++ ){
        temp = temp -> next;
       
    }
    struct node *del = temp->next;
    temp -> next = del -> next;
    free(del);
}
void display()
{
    struct node *temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp = temp -> next;
    }
   
}

int main()
{
   int n;
   int data ;
   scanf("%d",&n);
   for(int i = 0 ; i < n ; i++)
   {
       scanf("%d",&data);
       if(data > 0){
           append(data);
       }
   }
   int pos;
   scanf("%d",&pos);
   deleteAtPos(pos);
   display();
 
}

