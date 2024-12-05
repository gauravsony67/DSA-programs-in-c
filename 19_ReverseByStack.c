#include <stdio.h>
#define SIZE 10

int stack[SIZE], top = -1;

void push(int digit) { stack[++top] = digit; }
int pop() { return stack[top--]; }

void reverseNumber(int num) {
    while (num > 0) {
        push(num % 10); // Push each digit
        num /= 10;
    }
    while (top != -1) printf("%d", pop()); // Pop and print
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: ");
    reverseNumber(num);
    return 0;
}
