#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Node {
    int vertex;
    struct Node* next;
};

struct Node* adjList[MAX];

struct Node* createNode(int v) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}


void addEdge(int u, int v) {
   
    struct Node* newNode = createNode(v);
    newNode->next = adjList[u];
    adjList[u] = newNode;
}

void printGraph(int vertices) {
    for (int i = 0; i < vertices; i++) {
        struct Node* temp = adjList[i];
        printf("%d: ", i);
        while (temp != NULL) {
            printf("%d → ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int vertices, edges, u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);


    for (int i = 0; i < vertices; i++) {
        adjList[i] = NULL;
    }

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

    printf("\nAdjacency List:\n");
    printGraph(vertices);

    return 0;
}
