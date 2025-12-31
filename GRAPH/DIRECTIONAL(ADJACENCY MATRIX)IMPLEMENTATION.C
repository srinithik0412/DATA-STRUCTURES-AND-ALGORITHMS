#include <stdio.h>
#define MAX 10
int adjMatrix[MAX][MAX];
void addEdge(int u,int v){
    adjMatrix[u][v]=1;
  
}
void printGraph(int vertices){
    printf("Adjacency Matrix:\n");
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            printf("%d ",adjMatrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int vertices,edges;
    int u,v;
    printf("Enter no of vertices: ");
    scanf("%d",&vertices);
    printf("Enter no of edges: ");
    scanf("%d",&edges);
    for(int i=0;i<edges;i++){
        printf("Enter edge (u v): ");
        scanf("%d %d",&u,&v);
        addEdge(u,v);
    }
    printGraph(vertices);
    return 0;
}
