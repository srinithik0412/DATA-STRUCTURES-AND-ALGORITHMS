#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

int main() {
    int n, value;

    printf("Enter number of elements to push: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        struct node *newNode = malloc(sizeof(struct node));
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = top;
        top = newNode;   // push
    }

    printf("\nStack stored using linked list:\n");
    struct node *temp = top;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
