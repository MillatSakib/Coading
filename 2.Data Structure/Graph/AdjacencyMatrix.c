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



int main()
{
    int edge, node, i, j;
    char a, b;

    printf("Enter Number of Vertices: ");
    scanf("%d", &node);

    int matrix[node][node];

    // Initialize adjacency matrix to 0
    for (i = 0; i < node; i++) {
        for (j = 0; j < node; j++) {
            matrix[i][j] = 0;
        }
    }

    printf("Enter Number of Edges: ");
    scanf("%d", &edge);

    printf("Enter Your Edges:\n");
    for (i = 0; i < edge; i++) {
        scanf(" %c %c", &a, &b); // Read edges as characters
        matrix[a - 'A'][b - 'A'] = 1; // Convert character to index
        matrix[b - 'A'][a - 'A'] = 1; // For undirected graph
    }

    printf("Here is your graph representation:\n");
    for (i = 0; i < node; i++) {
        for (j = 0; j < node; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
