#include <stdio.h>
#define MAX 5

int queue[MAX];
int front=0,rear=-1;

int main()
{
   int n;
   scanf("%d",&n);
   
   if(n>MAX){
       printf("Queue overflow");
       return 0;
   }
   for(int i=0;i<n;i++){
       scanf("%d",&queue[i]);
       rear++;
   }
   if(front>rear){
       printf("Queue underflow");
   }
   else{
       printf("Deleted elements",queue[front]);
       front++;
   }
   printf("Queue after dequeue:\n");
   if(front>rear){
       printf("Queue is empty");
   }
   else{
       for(int i=front;i<=rear;i++){
           printf("%d\n",queue[i]);
       }
   }
   return 0;
}
