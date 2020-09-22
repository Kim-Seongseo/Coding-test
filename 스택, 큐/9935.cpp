#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string s1, s2;
char stackData[100001];
int top = -1;
char str[100001];
char bomb[50];

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

int main(){
    scanf("%s", str);
    scanf("%s", bomb);
    int len = strlen(bomb);
    for(int i=0; str[i]!=0; i++){
        push(str[i]);
    }
    
    
    
    return 0;
}