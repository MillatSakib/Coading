#include <stdio.h>

int stack[20], top = -1;

void push(int a) {
    stack[++top] = a;
}

int pop() {
    return stack[top--];
}

int isStackEmpty() {
    return top == -1;
}

void main() {
    int node, edge, source_node, current_node, neighbor_node, des, count = 0, path[20], temp;
    printf("Enter your node number: \n");
    scanf("%d", &node);

    int matrix[node][node];
    int color[node];
    int parent[node];

    for (int i = 0; i < node; i++) {
        for (int j = 0; j < node; j++) {
            matrix[i][j] = 0;
        }
    }

    printf("Enter your edge number: \n");
    scanf("%d", &edge);

    printf("Enter your edges (format: start end): \n");
    for (int i = 0; i < edge; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }

    printf("Here is your graph representation: \n");
    for (int i = 0; i < node; i++) {
        for (int j = 0; j < node; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter your source node: \n");
    scanf("%d", &source_node);

    for (int i = 0; i < node; i++) {
        color[i] = 1;
        parent[i] = -1;
    }

    push(source_node);

    while (!isStackEmpty()) {
        current_node = pop();

        if (color[current_node] == 1) {
            color[current_node] = 2;
            for (neighbor_node = 0; neighbor_node < node; neighbor_node++) {
                if (matrix[current_node][neighbor_node] == 1 && color[neighbor_node] == 1) {
                    push(neighbor_node);
                    parent[neighbor_node] = current_node;
                }
            }
        }
    }

    printf("Enter your destination node: \n");
    scanf("%d", &des);
    for (int i = 0; temp != source_node; i++) {
        temp = des;
        path[i] = temp;
        des = parent[temp];
        count++;
    }
    printf("Path from source to destination: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", path[i]);
    }

    return;
}
