#include <stdio.h>
#include <stdlib.h>

// Define the node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct CircularQueue {
    Node* rear;
} CircularQueue;

// Function to create a circular queue
CircularQueue* createQueue() {
    CircularQueue* queue = (CircularQueue*)malloc(sizeof(CircularQueue));
    queue->rear = NULL;
    return queue;
}

// Enqueue operation
void enqueue(CircularQueue* queue, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    if (queue->rear == NULL) {
        newNode->next = newNode;
        queue->rear = newNode;
    } else {
        newNode->next = queue->rear->next;
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    printf("%d enqueued\n", value);
}

// Dequeue operation
int dequeue(CircularQueue* queue) {
    if (queue->rear == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    Node* front = queue->rear->next;
    int value = front->data;
    if (front == queue->rear) {
        queue->rear = NULL;
    } else {
        queue->rear->next = front->next;
    }
    free(front);
    printf("%d dequeued\n", value);
    return value;
}

// Display the circular queue
void display(CircularQueue* queue) {
    if (queue->rear == NULL) {
        printf("Queue is empty\n");
        return;
    }
    Node* temp = queue->rear->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != queue->rear->next);
    printf("\n");
}

// Main function
int main() {
    CircularQueue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    printf("Queue: ");
    display(queue);

    dequeue(queue);
    printf("Queue after dequeue: ");
    display(queue);

    return 0;
}
