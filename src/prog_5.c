#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int adjMatrix[MAX][MAX];
int visited[MAX];
int n;

int queue[MAX],front =-1, rear=-1;

void enqueue(int v){
    if(rear==MAX-1){
        printf("Queue overflow\n");
        return;
    }
    if(front==-1)front=0;
    queue[++rear]=v;
}
int dequeue(){
    if(front==-1)return -1;
    int v=queue[front];
    if(front==rear)front=rear=-1;
    else front++;
    return v;
}

void DFS(int v){
    visited[v]=1;
    printf("%d ",v);
    for(int i=0; i<n;i++){
        if(adjMatrix[v][i]&& !visited[i])
        DFS(i);
    }
}

void BFS(int start){
    for(int i=0;i<n;i++)
    visited[i]=0;
    enqueue(start);
    visited[start]=1;

    while(front!=-1){
        int v= dequeue();
        printf("%d ",v);

        for(int i=0;i<n;i++){
            if(adjMatrix[v][i]&& !visited[i]){
                enqueue(i);
                visited[i]=1;
            }
        }
    }
}

void initGraph(){
    for(int i=0;i<MAX;i++)
    for(int j=0; j<MAX;j++)
    adjMatrix[i][j]=0;
}

int main(){
    initGraph();

    printf("Enter number of vertices: ");
    scanf("%d",&n);

    int edges,u,v;
    printf("Enter the number edges:");
    scanf("%d",&edges);

    printf("Enter edges(u v) with 0-based indexing:\n");
    for(int i=0; i<edges; i++){
        scanf("%d %d",&u,&v);
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }
    printf("\nDFS traversal starting from vertex 0: ");
    for(int i=0; i<n; i++)
    visited[i]=0;
    DFS(0);

    printf("\nBFS traversal starting from vertex 0: ");
    BFS(0);

    printf("\n");
    return 0;
}