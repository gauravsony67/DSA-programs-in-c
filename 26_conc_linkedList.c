#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}

void display(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void concatenate(struct Node** head1, struct Node* head2) {
    if (*head1 == NULL) *head1 = head2;
    else {
        struct Node* temp = *head1;
        while (temp->next) temp = temp->next;
        temp->next = head2;
    }
}

int main() {
    struct Node *list1 = NULL, *list2 = NULL;
    insert(&list1, 10);
    insert(&list1, 20);
    insert(&list2, 30);
    insert(&list2, 40);

    printf("List 1: ");
    display(list1);

    printf("List 2: ");
    display(list2);

    concatenate(&list1, list2);

    printf("Concatenated List: ");
    display(list1);

    return 0;
}
