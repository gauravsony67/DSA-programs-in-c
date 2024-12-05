#include <stdio.h>
#include <ctype.h>
#define SIZE 50

char stack[SIZE];
int top = -1;

void push(char ch) { stack[++top] = ch; }
char pop() { return stack[top--]; }
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

void infixToPostfix(char* infix, char* postfix) {
    int i = 0, j = 0;
    while (infix[i]) {
        if (isalnum(infix[i])) postfix[j++] = infix[i]; // Operand
        else if (infix[i] == '(') push(infix[i]);       // Left Parenthesis
        else if (infix[i] == ')') {                    // Right Parenthesis
            while (stack[top] != '(') postfix[j++] = pop();
            pop();
        } else {                                       // Operator
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }
        i++;
    }
    while (top != -1) postfix[j++] = pop();
    postfix[j] = '\0';
}

int main() {
    char infix[SIZE], postfix[SIZE];
    printf("Enter infix: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);
    return 0;
}
