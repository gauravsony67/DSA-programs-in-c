#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void display() {
    struct Node* temp = head;
    if (temp == NULL) printf("Empty List\n");
    else {
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void delete() {
    if (head == NULL) printf("Underflow\n");
    else {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        printf("Deleted\n");
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
