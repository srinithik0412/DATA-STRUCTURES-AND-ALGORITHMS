#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    int priority;
    struct node*next;
    
};

struct node*front=NULL;

void enqueue(int data,int priority){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->priority=priority;
    newnode->next=NULL;
    
    if(front==NULL || priority<front->priority){
        newnode->next=front;
        front=newnode;
    }
    else{
        struct node*temp=front;
        while(temp->next != NULL && temp->next->priority<=priority){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void display(){
    
    if(front==NULL){
        printf("Queue is empty");
        return;
    }
    
    struct node*temp=front;
    printf("Priority Queue : ");
    while(temp!=NULL){
        printf("(%d,p=%d)",temp->data,temp->priority);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    int n;
    int data,priority;
    printf("Enter number of elements:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Enter the value:");
        scanf("%d",&data);
        printf("Enter priority:");
        scanf("%d",&priority);
        enqueue(data,priority);
        
    }
    display();
    return 0;
    
}
   
