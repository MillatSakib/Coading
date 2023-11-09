#include <stdio.h>
#include <stdlib.h>
#define N 5
int dequeue[N];
int f = -1, R = -1;
void enqueuefront(int x)
{
    if ((f == 0 && R == N - 1) || (f == R + 1))
    {
        printf("Queue is full");
    }
    else if (f == -1 && R == -1)
    {
        f = R = 0;
        dequeue[f] = x;
    }
    else if (f == 0)
    {
        f = N - 1;
        dequeue[f] = x;
    }
    else
    {
        f--;
        dequeue[f] = x;
    }
}

void enqueuerear(int x)
{
    if ((f == 0 && R == N - 1) || (f == R + 1))
    {
        printf("Queue is full");
    }
    else if (f == -1 && R == -1)
    {
        f = R = 0;
        dequeue[f] = x;
    }

    else if (R == N - 1)
    {
        R = 0;
        dequeue[R] = x;
    }
    else
    {
        R++;
        dequeue[R] = x;
    }
}

int display()
{
    if (f == -1 && R == -1)
    {
        printf("Queue is Empty!!!");
    }
    else
    {
        int i = f;
        while (i != (R + 1) % N)
        {
            printf("%d ", dequeue[i]);
            i = (i + 1) % N;
        }
    }

    printf("\n");
}

int dequeuerear()
{
    if (f == -1 && R == -1)
    {
        printf("Queue is Empty!!!");
    }
    else if (f == R)
    {
        f = R = -1;
    }
    else if (R == 0)
    {
        printf("%d ", dequeue[R]);
        R = N - 1;
    }
    else
    {
        printf("%d ", dequeue[R]);
        R--;
    }
}

void dequeuefront()
{
    if (f == -1 && R == -1)
    {
        printf("Queue is Empty!!!");
    }
    else if (f == R)
    {
        printf(" %d", dequeue[f]);

        f = R = -1;
        
    }
    else if (f == N - 1)
    {
        printf(" %d ", dequeue[f]);
        f = 0;
    }
    else
    {
        printf(" %d ", dequeue[f]);
        f++;
    }
}

void getfront()
{
    printf("%d ", dequeue[f]);
}

int main()
{

    enqueuefront(5);
    enqueuefront(8);
    display();
    printf("\n");
    dequeuefront();
    dequeuefront();
    printf("\n");
    display();
    enqueuerear(5);
    enqueuerear(8);
    display();
    printf("\n");
    dequeuefront();
    dequeuefront();
    return 0;
}
