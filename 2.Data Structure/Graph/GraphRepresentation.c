#include <stdio.h>
int arr_len;

struct Node
{
    int data;
    struct Node *next;
} *list[100];

int matrix_arr[100][100];

// this make adjacency matrix to adjacency list.
void addEdege(int src, int dest)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = dest;
    newNode->next = NULL;
    if (list[src] == NULL)
    {
        list[src] = newNode;
    }
    else
    {
        struct Node *temp = list[src];
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// this send matrix graph data for making adjacency list and display adjacency list.

void adjacency_list(arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        for (int j = 0; j < arr_len; j++)
        {
            // printf("%d %d\n",i,j);
            if (matrix_arr[i][j] > 0)
            {
                addEdege(i, j);
            }
        }
    }
    for (int i = 0; i < arr_len; i++)
    {
        printf("%d is connected with ", i);
        struct Node *temp = list[i];
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

// it store the graph data on 2d array as adjacency matrix.
void adjacency_matrix()
{
    printf("Give the length of array: ");
    scanf("%d", &arr_len);
    printf("Now Give the Edge of vertices:");
    for (int i = 0; i < arr_len; i++)
    {
        for (int j = 0; j < arr_len; j++)
        {
            printf("%d->%d: ", i, j);
            scanf("%d", &matrix_arr[i][j]);
        }
    }
    adjacency_list(arr_len);
}

int main()
{
    // assign Null on list to avoid any problem
    for (int i = 0; i < arr_len; i++)
    {
        list[i] = NULL;
    }

    adjacency_matrix();

    return 0;
}
