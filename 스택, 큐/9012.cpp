#include <stdio.h>

char stackData[100];
int top = -1;
char str[100];

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
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", str);
        if(str[0] == ')') printf("NO\n");
        else if(str[0] == '('){
            for(int j=0; str[j]!=0; j++){
                if(str[j] == '(') push(str[j]);
                else pop();
                if(size()<0) break;
            }
            if(size()==0) printf("YES\n");
            else printf("NO\n");
        }
        top = -1;
    }
    
    return 0;
}