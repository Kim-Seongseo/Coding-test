#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    int n, result;
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if(str=="push"){
            int data;
            cin >> data;
            q.push(data);
        }
        else if(str=="pop"){
            if(q.size()!=0){
                result=q.front();
                q.pop();
            }
            else{
                result=-1;
            }
            cout << result << endl;
        }
        else if(str=="size"){
            result=q.size();
            cout << result << endl;
        }
        else if(str=="empty"){
            if(q.size()==0) result=1;
            else result=0;
            cout << result << endl;
        }
        else if(str=="front"){
            if(q.size()!=0) result=q.front();
            else result=-1;
            cout << result << endl;
        }
        else if(str=="back"){
            if(q.size()!=0) result=q.back();
            else result=-1;
            cout << result << endl;
        }
    }

    return 0;
}