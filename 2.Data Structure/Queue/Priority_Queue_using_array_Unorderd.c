/*
Types of Priority Queue:

Min Priority Queue: Minimum number of value gets the highest priority and lowest number of element gets the highest priority.

Max Priority Queue: Maximum number value gets the highest priority and minimum number of value gets the minimum priority.


Priority Queue Approaches
---------------------------------

Priority Queue can be implemented in two ways:
Using ordered Array: In ordered array enqueue operation takes O(n) time complexity because it enters elements in sorted order in queue. And deletion takes O(1) time complexity.

Using unordered Array:In unordered array deletion takes O(n) time complexity because it search for the element in Queue for the deletion and enqueue takes O(1) time complexity.


Implementing Priority Queue (Unordered)
--------------------------------------------
Note : In below implementation we are taking example of Max priority queue, to implement min priority queue you can just change greater than sign to smaller than at the time of comparison and initialisation of maxPriority

Enqueue – Insert the item at the end of the priority queue takes O(1) time

Dequeue – Remove the item with the highest priority

Peek – Return item with highest priority




*/

// C program to Demonstrate Priority Queue
#include <stdio.h>
#include <limits.h>

#define MAX 100

// denotes where the last item in priority queue is
// initialized to -1 since no item is in queue
int last_index = -1;

// pqVal holds data for each index item
// pqPriority holds priority for each index item
int priority_queue_value[MAX];
int priority_queue_priority[MAX];

int isEmpty()
{
    return last_index == -1;
}

int isFull()
{
    return last_index == MAX - 1;
}

// enqueue just adds item to the end of the priority queue | O(1)
void enqueue(int data, int priority)
{
    if (!isFull())
    {

        // Increase the index
        last_index++;

        // Insert the element in priority queue
        priority_queue_value[last_index] = data;
        priority_queue_priority[last_index] = priority;
    }
}

// returns item with highest priority
// NOTE: Max Priority Queue High priority number means higher priority | O(N)
int peek()
{
    // Note : Max Priority, so assigned min value as initial value
    int maxPriority = INT_MIN;
    int indexPos = -1;

    // Linear search for highest priority
    for (int i = 0; i <= last_index; i++)
    {
        // If two items have same priority choose the one with
        // higher data value
        if (maxPriority == priority_queue_priority[i] && indexPos > -1 && priority_queue_value[indexPos] < priority_queue_value[i])
        {
            maxPriority = priority_queue_priority[i];
            indexPos = i;
        }

        // note: using MAX Priority so higher priority number
        // means higher priority
        else if (maxPriority < priority_queue_priority[i])
        {
            maxPriority = priority_queue_priority[i];
            indexPos = i;
        }
    }

    // Return index of the element where
    return indexPos;
}

// This removes the element with highest priority
// from the priority queue | O(N)
void dequeue()
{
    if (!isEmpty())
    {
        // Get element with highest priority
        int indexPos = peek();

        // reduce size of priority queue by first
        // shifting all elements one position left
        // from index where the highest priority item was found
        for (int i = indexPos; i < last_index; i++)
        {
            priority_queue_value[i] = priority_queue_value[i + 1];
            priority_queue_priority[i] = priority_queue_priority[i + 1];
        }

        // reduce size of priority queue by 1
        last_index--;
    }
}

void display()
{
    for (int i = 0; i <= last_index; i++)
    {
        printf("(%d, %d)\n", priority_queue_value[i], priority_queue_priority[i]);
    }
}

// Driver Code
int main()
{
    // To enqueue items as per priority
    enqueue(5, 1);
    enqueue(10, 3);
    enqueue(15, 4);
    enqueue(20, 5);
    enqueue(500, 2);

    printf("Before Dequeue : \n");
    display();

    // Dequeue the top element
    dequeue(); // 20 dequeued
    dequeue(); // 15 dequeued

    printf("\nAfter Dequeue : \n");
    display();

    return 0;
}