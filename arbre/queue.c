#include "queue.h"
#include"arbre.h"

// C program for array implementation of queue
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a queu

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
struct Queue* createQueue(unsigned capacity)
{
    struct Queue* queue = (struct Queue*)malloc(
        sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    // This is important, see the enqueue
    queue->rear = capacity - 1;
    queue->array = (struct noeud**)malloc(queue->capacity * sizeof(struct noeud));
    return queue;
}

// Queue is full when size becomes
// equal to the capacity
int isFull(struct Queue* queue)
{
    return (queue->size == queue->capacity);
}

// Queue is empty when size is 0
int isEmpty(struct Queue* queue)
{
    return (queue->size == 0);
}

// Function to add an item to the queue.
// It changes rear and size
void enqueue(struct Queue* queue, struct noeud* item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1)
                  % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d enqueued to queue\n", item->data);
}

// Function to remove an item from queue.
// It changes front and size
struct noeud* dequeue(struct Queue* queue)
{
    if (isEmpty(queue)){
        struct noeud* item = queue->array[queue->front];
        queue->front = (queue->front + 1)
                       % queue->capacity;
        queue->size = queue->size - 1;
        return item;
    }
    return;
}

// Function to get front of queue
// front(struct Queue* queue)
//{
 //   if (isEmpty(queue))
 //       return INT_MIN;
  //  return queue->array[queue->front];
//}

// Function to get rear of queue
//int rear(struct Queue* queue)
//{
 //   if (isEmpty(queue))
 //       return INT_MIN;
 //   return queue->array[queue->rear];
//}
