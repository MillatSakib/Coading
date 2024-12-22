/*

Input:

Enter Number of Vertices-
5

Enter Number of Edges-
7

Enter The Edges:
A B
A C
A D
A E
B C

C D
C E
Output:
0 1 1 1 1
1 0 1 0 0
1 1 0 1 1
1 0 1 0 0
1 0 1 0 0

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX], front = -1, rear = -1;
int visited[MAX];
int adj[MAX][MAX];

void enqueue(int x) {
    queue[++rear] = x;
}

int dequeue() {
    return queue[++front];
}

int isEmpty() {
    return front == rear;
}

void bfs(int n, int v) {
    enqueue(v);
    visited[v] = 1;

    while (!isEmpty()) {
        int u = dequeue();
        printf("%d ", u);

        for (int i = 1; i <= n; i++) {
            if (adj[u][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main(){
while(1){
    int n, i, j, v;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &v);

    bfs(n, v);

    printf("\n");


}
return 0;
}
