#include <stdio.h>

int stackData[1000001];
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
    int n, data, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &data);
        if(data==0){
            if(top!=-1){
                pop();
            }
        }
        else{
            push(data);
        }
    }
    int len = size();
    for(int i=0; i<len; i++){
        sum += pop();
    }
    printf("%d", sum);
    return 0;
}