/*

Types of Priority Queue:

Min Priority Queue: Minimum number of value gets the highest priority and lowest number of element gets the highest priority.

Max Priority Queue: Maximum number value gets the highest priority and minimum number of value gets the minimum priority.


Priority Queue Approaches
---------------------------------

Priority Queue can be implemented in two ways:
Using ordered Array: In ordered array enqueue operation takes O(n) time complexity because it enters elements in sorted order in queue. And deletion takes O(1) time complexity.

Using unordered Array:In unordered array deletion takes O(n) time complexity because it search for the element in Queue for the deletion and enqueue takes o(1) time complexity.




Implementing Priority Queue (Ordered Array)
-----------------------------------------------------
Again we will take example of max priority queue below

Dequeue – Dequeue item from the end O(1)

Enqueue – Insert item in according to their priority, lowest priority at the start and highest priority at the end. Items are arranged in ascending sorted order of their priority value

Peek – Return item with highest priority. Lsat item in the array itself will have highest priority

*/

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

// Insert the element in maintaining items in sorted order
// of their priority
void enqueue(int data, int priority)
{
    if (!isFull())
    {

        // first item being entered
        if (last_index == -1)
        {
            last_index++; // increase the index
            priority_queue_value[last_index] = data;
            priority_queue_priority[last_index] = priority;
            return;
        }
        else
        {
            // Increase the index
            last_index++;
            // in reverse order
            for (int i = last_index - 1; i >= 0; i--)
            {
                // shift all items rightwards with higher priority
                // than the element we trying to insert
                if (priority_queue_priority[i] >= priority)
                {
                    priority_queue_value[i + 1] = priority_queue_value[i];
                    priority_queue_priority[i + 1] = priority_queue_priority[i];
                }
                else
                {
                    // insert item just before where
                    // lower priority index was found
                    priority_queue_value[i + 1] = data;
                    priority_queue_priority[i + 1] = priority;
                    break;
                }
            }
        }
    }
    else
    {
        printf("Enqueue operation can't perform successfully because of queue is full!!!\n");
    }
}

// returns item with highest priority
// note highest priority in max priority queue is last item in array
int peek()
{
    return last_index;
}

// just reducing index would mean we have dequed
// the value would be sitll there but we can say that
// no more than a garbage value
void dequeue()
{
    if (!isEmpty())
    {
        last_index--;
    }
    else
    {
        printf("Dequeue operation can't perform successfully because of queue is empty!!!\n");
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
    enqueue(25, 1);
    enqueue(10, 10);
    enqueue(15, 50);
    enqueue(20, 100);
    enqueue(30, 5);
    enqueue(40, 7);

    printf("Before Dequeue : \n");
    display();

    // // Dequeue the top element
    dequeue(); // 20 dequeued
    dequeue(); // 15 dequeued

    printf("\nAfter Dequeue : \n");
    display();

    return 0;
}