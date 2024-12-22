/*

INPUT: 5 5 0 1 0 2 0 3 0 4 0 0 2 4

OUTPUT:
Enter your node number:
5 5 0 1 0 2 0 3 0 4 0 0 2 4
Enter your edge number:
Enter your edge:
Here is your graph representation:
1 1 1 1 1
1 0 0 0 0
1 0 0 0 0
1 0 0 0 0
1 0 0 0 0
Enter your source:
Enter your Destination node:
2 0 4
Process returned 2 (0x2)   execution time : 1.320 s
Press any key to continue.

*/

#include <stdio.h>
int queue[20], front, rear;

void main (){

int node, edge, source_node, current_node, neighbor_node, des, count=0, stack[20], temp;
printf("Enter your node number: \n");
scanf("%d",&node);
int matrix[node][node];
int color[node];
int parent[node];
int distance[node];
for(int i=0; i<node;i++){

    for(int j=0;j<node;j++){
        matrix[i][j] =0;
    }
}
printf("Enter your edge number: \n");
scanf("%d",&edge);
printf("Enter your edge: \n");
for(int i=0;i<edge; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    matrix[a][b]=1;
    matrix[b][a] = 1;

}
printf("Here is your graph representation: \n");

for(int i =0; i<node;i++){
    for(int j=0; j<node; j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
printf("Enter your source: \n");
scanf("%d",&source_node);
for(current_node=0; current_node<node;current_node++){
    color[current_node]=1;
    parent[current_node]=-1;
    distance[current_node] = -1;

}

color[source_node] = 2;
distance[source_node] = 0;
parent[source_node] = -1;
front=0;
rear=0;
enqueue(source_node);
while(front!=rear){
    current_node=dequeue();
    for(neighbor_node=0; neighbor_node<node; neighbor_node++){
        if(matrix[current_node][neighbor_node] ==1 && color[neighbor_node] ==1 ){
            color[neighbor_node]=2;
            distance[neighbor_node] = distance[current_node]+1;
            parent[neighbor_node] = current_node;
            enqueue(neighbor_node);
        }
    }
    color[current_node] = 3;
}
printf("Enter your Destination node: \n");
scanf("%d",&des);
for(int i=0;temp!=source_node;i++){
    temp=des;
    stack[i] = temp;
    des = parent[temp];
    count++;
}
for(int i=count-1; i>=0; i=i-1){
    printf("%d ", stack[i]);

}
return 0;
}

void enqueue(int a){
queue[rear++]=a;

}

int dequeue(){
int a;
a=queue[front++];
return a;
}
