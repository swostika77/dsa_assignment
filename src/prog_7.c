#include<stdio.h>
#include<limits.h>
#define MAX 100
int graph[MAX][MAX];
int n;

int minDistance(int distance[],int visited[]){
    int min=INT_MAX, minindex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i]&& distance[i]<min){
            min=distance[i];
            minindex=i;
        }
    }
    return minindex;
}

void dijkstra(int src){
    int distance[MAX],visited[MAX];
    for(int i=0;i<n;i++){
        distance[i]=INT_MAX;
        visited[i]=0;
    }
    distance[src]=0;
    for(int count=0;count<n-1;count++){
        int u=minDistance(distance,visited);
        visited[u]=1;
        for(int v=0;v<n;v++){
            if(!visited[v]&& graph[u][v] && distance[u]!=INT_MAX && distance[u]+graph[u][v]<distance[v]){
                distance[v]=distance[u]+graph[u][v];
            }
        }
    }
    printf("Vertex\tDistance from Source %d\n",src);
    for(int i=0;i<n;i++)
    printf("%d\t%d\n",i,distance[i]);
}

int main(){
    int src;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter adjacency matrix(0 if no edge):\n");
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&graph[i][j]);

    printf("Enter source vertex:");
    scanf("%d",&src);

    dijkstra(src);
    return 0;

}