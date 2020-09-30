#include <iostream>
#include <string>
using namespace std;
string s, key;
int main(){
    cin >> s >> key;

    int len = key.length();
    int c = s.find(key);
    while(c >= 0){
        s = s.replace(c, len, "");
        c = s.find(key);
    }
    if(s=="") s = "FRULA";

    cout << s << endl;
    
    return 0;
}