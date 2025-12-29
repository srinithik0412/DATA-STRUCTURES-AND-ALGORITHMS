#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
int n;

printf("Enter no of elements (max %d): ", MAX);  
scanf("%d", &n);  

if (n > MAX)  
{  
    printf("Stack overflow\n");  
    return 0;  
}  

/* PUSH */  
for (int i = 0; i < n; i++)  
{  
    scanf("%d", &stack[i]);  
    top++;  
}  
    printf("Peek element: %d\n", stack[top]);  


return 0;

}
