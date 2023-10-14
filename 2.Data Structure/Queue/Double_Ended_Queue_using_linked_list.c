#include <stdio.h>
#include <stdlib.h>

// Structure of a node in the double ended queue
typedef struct Node {
  int data;
  struct Node *next;
  struct Node *prev;
} Node;

// Structure of the double ended queue
typedef struct Queue {
  Node *head;
  Node *tail;
} Queue;

// Function to initialize the double ended queue
Queue *initQueue() {
  Queue *queue = (Queue *)malloc(sizeof(Queue));
  queue->head = NULL;
  queue->tail = NULL;
  return queue;
}

// Function to insert an element at the front of the double ended queue
void enqueueFront(Queue *queue, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = queue->head;
  newNode->prev = NULL;
  if (queue->head == NULL) {
    queue->tail = newNode;
  } else {
    queue->head->prev = newNode;
  }
  queue->head = newNode;
}

// Function to insert an element at the back of the double ended queue
void enqueueBack(Queue *queue, int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = queue->tail;
  if (queue->tail == NULL) {
    queue->head = newNode;
  } else {
    queue->tail->next = newNode;
  }
  queue->tail = newNode;
}

// Function to delete an element from the front of the double ended queue
int dequeueFront(Queue *queue) {
  if (queue->head == NULL) {
    return -1;
  }
  int data = queue->head->data;
  Node *temp = queue->head;
  queue->head = queue->head->next;
  if (queue->head == NULL) {
    queue->tail = NULL;
  } else {
    queue->head->prev = NULL;
  }
  free(temp);
  return data;
}

// Function to delete an element from the back of the double ended queue
int dequeueBack(Queue *queue) {
  if (queue->tail == NULL) {
    return -1;
  }
  int data = queue->tail->data;
  Node *temp = queue->tail;
  queue->tail = queue->tail->prev;
  if (queue->tail == NULL) {
    queue->head = NULL;
  } else {
    queue->tail->next = NULL;
  }
  free(temp);
  return data;
}

// Function to check if the double ended queue is empty
int isEmptyQueue(Queue *queue) {
  return queue->head == NULL;
}

// Function to print the double ended queue
void printQueue(Queue *queue) {
  Node *temp = queue->head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
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
