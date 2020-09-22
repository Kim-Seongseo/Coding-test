#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n, result;
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if(str=="push"){
            int data;
            cin >> data;
            s.push(data);
        }
        else if(str=="pop"){
            if(s.size()!=0){
                result=s.top();
                s.pop();
            }
            else{
                result=-1;
            }
            cout << result << endl;
        }
        else if(str=="size"){
            result=s.size();
            cout << result << endl;
        }
        else if(str=="empty"){
            if(s.size()==0) result=1;
            else result=0;
            cout << result << endl;
        }
        else if(str=="top"){
            if(s.size()!=0) result=s.top();
            else result=-1;
            cout << result << endl;
        }
    }

    return 0;
}