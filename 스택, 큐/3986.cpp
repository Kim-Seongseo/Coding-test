#include <stdio.h>

char stackData[100001];
int top = -1;
char str[100001];

void push(char data) {
    top++;
    stackData[top] = data;
}

void pop() {
    top--;
}

char top2() {
    char tmp = stackData[top];
    return tmp;
}

int isEmpty() {
    return top == -1;
}

char peek() {
    return stackData[top];
}

int size() {
    return top+1;
}

int main() {
    int n, cnt=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", str);
        for(int i=0; str[i]!=0; i++){
            if(size()==0) push(str[i]);
            else{
                if(str[i] == top2()) pop();
                else push(str[i]);
            }
        }
        if(size()==0) cnt++;
        top = -1;
    }
    printf("%d", cnt);
    return 0;
}