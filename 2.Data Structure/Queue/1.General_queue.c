#include <stdio.h>
#include <stdbool.h>
#define N 5

int queue[N];

int front = -1;
int rear = -1;
void enqueue(int x)
{

    if (rear == N - 1)
    {
        printf("Overflow..");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Your array is Empty!\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d ", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Your array is Empty!\n");
    }
    else
    {

        for (int i = front; i < rear + 1; i++)
        {
            printf(" %d", queue[i]);
        }
    }
}

void Peek()
{
    if (front == -1)
    {

        printf("\nThere has no element on the array.");
    }

    else
    {
        printf("\nNow your front is %d", queue[front]);
    }
}

bool isfull()
{
    if (rear == N - 1)
        return true;
    else
        return false;
}

bool isempty()
{
    if (front < 0 || front > rear)
        return true;
    else
        return false;
}

int main()
{
    int value;
    printf("Please enter five number for queue: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &value);
        enqueue(value);
    }

    printf("Now your queue list is: ");
    display();
    printf("\nNow dequeueing the queue: ");
    for (int i = 0; i < 5; i++)
    {

        dequeue();
    }

    Peek();
}
