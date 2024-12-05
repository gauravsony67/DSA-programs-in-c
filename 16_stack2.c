#include <stdio.h>
#define SIZE 5
int stack[SIZE], top = -1;

void push(int val) {
    if (top == SIZE - 1) printf("Overflow\n");
    else stack[++top] = val;
}

void pop() {
    if (top == -1) printf("Underflow\n");
    else printf("Popped: %d\n", stack[top--]);
}

void display() {
    if (top == -1) printf("Empty Stack\n");
    else {
        for (int i = top; i >= 0; i--) printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int choice, val;
    do {
        printf("1.Push 2.Pop 3.Display 4.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter value: "); scanf("%d", &val); push(val); break;
            case 2: pop(); break;
            case 3: display(); break;
        }
    } while (choice != 4);
    return 0;
}
