#include <stdio.h>

char stackData[100000];
int top = -1;
char str[100000];

void push(char data) {
    top++;
    stackData[top] = data;
}

char pop() {
    char tmp = stackData[top];
    top--;
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
    int ans=0, cnt=0;
    scanf("%s", str);
    for(int i=0; str[i]!=0; i++){
        if(str[i]=='('){
            push(str[i]);
        }
        if(str[i]==')'){
            if(str[i-1]=='('){
                pop();
                ans+=size();
            }
            else{
                pop();
                ans+=1;
            }
        }
    }
    printf("%d", ans);
    return 0;
}