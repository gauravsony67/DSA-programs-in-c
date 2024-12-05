#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void insert(int val) {
    if (rear == SIZE - 1) printf("Overflow\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = val;
    }
}

void delete() {
    if (front == -1 || front > rear) printf("Underflow\n");
    else printf("Deleted: %d\n", queue[front++]);
}

void display() {
    if (front == -1 || front > rear) printf("Empty Queue\n");
    else {
        for (int i = front; i <= rear; i++) printf("%d ", queue[i]);
        printf("\n");
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
