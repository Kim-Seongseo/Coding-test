#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
char stackData[2000000];
char str[2000000];
class MyStack{
    int top = -1;
public:
    MyStack(){}
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
};

int main() {
    MyStack s1, s2;

    scanf("%s", str);
    for(int i=0; str[i]!=0; i++){
        if(isalpha(str[i])!=0 || isdigit(str[i])!=0) s1.push(str[i]);
        else if(str[i]=='<') s2.push(s1.pop());
        else if(str[i]=='>') s1.push(s2.pop());
        else if(str[i]=='-') s1.pop();
    }

    while(s1.isEmpty() != 1){
        s2.push(s1.pop());
    }

    while(s2.isEmpty() != 1){
        printf("%c", s2.pop());
    }

    return 0;
}