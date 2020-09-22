#include <stdio.h>

int stackData[1000];
int top = -1;

void push(int data) {
    top++;
    stackData[top] = data;
}

int pop() {
    int tmp = stackData[top];
    top--;
    return tmp;
}

int isEmpty() {
    return top == -1;
}

int peek() {
    return stackData[top];
}

int size() {
    return top+1;
}

int main() {
    return 0;
}