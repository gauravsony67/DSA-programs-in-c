#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void insert(int val) {
    if ((rear + 1) % SIZE == front) printf("Overflow\n");
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        queue[rear] = val;
    }
}

void delete() {
    if (front == -1) printf("Underflow\n");
    else {
        printf("Deleted: %d\n", queue[front]);
        if (front == rear) front = rear = -1;  // Queue becomes empty
        else front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) printf("Empty Queue\n");
    else {
        int i = front;
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % SIZE;
        }
        printf("%d\n", queue[rear]);
    }
}

int main() {
    int choice, val;
    do {
        printf("1.Insert 2.Delete 3.Display 4.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter value: "); scanf("%d", &val); insert(val); break;
            case 2: delete(); break;
            case 3: display(); break;
        }
    } while (choice != 4);
    return 0;
}
