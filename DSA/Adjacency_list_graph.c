#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

typedef struct Adjacency_list_graph{
    int totalVertices;
    node** Graph;
}graph;

void initGraph(graph* G, int vertices){
    G->totalVertices= vertices;
    G->Graph= (node**)malloc(G->totalVertices*sizeof(node*));
    for (int i=0; i< G->totalVertices; i++){
        G->Graph[i]= NULL;
    }
}

void addEdge(graph* G, int start, int end){
    node* temp= (node*)malloc(sizeof(node));
    temp->data= end;
    temp->next= G->Graph[start];
    G->Graph[start]= temp;

    node* temp2= (node*)malloc(sizeof(node));
    temp2->data= start;
    temp2->next= G->Graph[end];
    G->Graph[end]= temp2;
}

void printGraph(graph* G){
    for (int i= 0; i< G->totalVertices; i++){
        node* ptr= G->Graph[i];
        while(ptr!= NULL){
            printf("[%d]->", ptr->data);
            ptr= ptr->next;
        }
        printf("NULL\n");
    }
}

int main(){
    graph g1;
    initGraph(&g1, 3);
    addEdge(&g1, 0, 1);
    addEdge(&g1, 0, 2);
    printGraph(&g1);
    return 0;
}