#include <stdio.h>
#include <stdlib.h>

// Maximum size of the double ended queue
#define MAX_SIZE 10

// Structure of the double ended queue
typedef struct Queue {
  int *array;
  int front;
  int rear;
  int size;
} Queue;

// Function to initialize the double ended queue
Queue *initQueue() {
  Queue *queue = (Queue *)malloc(sizeof(Queue));
  queue->array = (int *)malloc(sizeof(int) * MAX_SIZE);
  queue->front = 0;
  queue->rear = -1;
  queue->size = 0;
  return queue;
}

// Function to insert an element at the front of the double ended queue
void enqueueFront(Queue *queue, int data) {
  if (queue->size == MAX_SIZE) {
    printf("Queue is full\n");
    return;
  }

  queue->front = (queue->front - 1 + MAX_SIZE) % MAX_SIZE;
  queue->array[queue->front] = data;
  queue->size++;
}

// Function to insert an element at the back of the double ended queue
void enqueueBack(Queue *queue, int data) {
  if (queue->size == MAX_SIZE) {
    printf("Queue is full\n");
    return;
  }

  queue->rear = (queue->rear + 1) % MAX_SIZE;
  queue->array[queue->rear] = data;
  queue->size++;
}

// Function to delete an element from the front of the double ended queue
int dequeueFront(Queue *queue) {
  if (queue->size == 0) {
    printf("Queue is empty\n");
    return -1;
  }

  int data = queue->array[queue->front];
  queue->front = (queue->front + 1) % MAX_SIZE;
  queue->size--;
  return data;
}

// Function to delete an element from the back of the double ended queue
int dequeueBack(Queue *queue) {
  if (queue->size == 0) {
    printf("Queue is empty\n");
    return -1;
  }

  int data = queue->array[queue->rear];
  queue->rear = (queue->rear - 1 + MAX_SIZE) % MAX_SIZE;
  queue->size--;
  return data;
}

// Function to check if the double ended queue is empty
int isEmptyQueue(Queue *queue) {
  return queue->size == 0;
}

// Function to print the double ended queue
void printQueue(Queue *queue) {
  for (int i = queue->front; i <= queue->rear; i++) {
    printf("%d ", queue->array[i]);
  }
  printf("\n");
}

// Main function
int main() {
  Queue *queue = initQueue();

  // Enqueue elements at the front and back of the queue
  enqueueFront(queue, 10);
  enqueueBack(queue, 20);
  enqueueFront(queue, 30);
  enqueueBack(queue, 40);

  // Print the queue
  printQueue(queue);

  // Dequeue elements from the front and back of the queue
  printf("Dequeued element from the front: %d\n", dequeueFront(queue));
  printf("Dequeued element from the back: %d\n", dequeueBack(queue));

  // Print the queue
  printQueue(queue);

  return 0;
}

