#include <stdio.h>

#define TOTAL_VERTICES 3

typedef struct Adjacency_Matrix{
    int matrix[TOTAL_VERTICES][TOTAL_VERTICES];
}graph;

void createGraph(graph* G){
    for(int i= 0; i< TOTAL_VERTICES; i++){
        for(int j= 0; j< TOTAL_VERTICES; j++){
            G->matrix[i][j]= 0;
        }
    }
}

void addEdge(graph* G, int start, int end){
    G->matrix[start][end]= 1;
    G->matrix[end][start]= 1;
}

void printGraph(graph* G){
    for (int i= 0; i< TOTAL_VERTICES; i++){
        for (int j= 0; j< TOTAL_VERTICES; j++){
            printf("%d ", G->matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    graph g1;
    createGraph(&g1);
    addEdge(&g1, 0, 1);
    addEdge(&g1, 0, 2);
    printGraph(&g1);
    return 0;
}