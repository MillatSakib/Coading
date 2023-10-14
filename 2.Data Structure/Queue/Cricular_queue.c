#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x){

    if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }

    else if((rear+1)%N == front){
        printf("Queue is full.!!");
    }
    else{
        rear = (rear+1)%N;
        queue[rear] = x;
    }

}


void dequeue(){

    if(front == -1 && rear == -1){
        printf("Queue is Empty!!");
    }

    else if(front == rear){
        printf("%d  ", queue[front]);
        front = rear = -1;
    }

    else{
        printf("%d  ", queue[front]);
        front = (front+1)%N;

    }

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
    printf("\nNow dequeueing the queue: ");
    for (int i = 0; i < 5; i++)
    {

        dequeue();
    }


}




