#include <stdio.h>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    int c;

    q.push(5);
    q.push(3);
    q.push(7);
    c = q.front();  //삭제x 가져오기만함
    q.pop();
    printf("%d\n", c);

    q.push(9);
    c = q.front();
    q.pop();
    printf("%d\n", c);
    c = q.front();
    q.pop();
    printf("%d\n", c);
    c = q.front();
    q.pop();
    printf("%d\n", c);
    return 0;
}