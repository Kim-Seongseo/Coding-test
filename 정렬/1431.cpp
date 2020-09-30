#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(string s1, string s2){
    int len1 = s1.length(), len2 = s2.length();
    int sum1=0, sum2=0;
    for(int i=0; i<len1; i++){
        if((s1[i]>='0') && (s1[i]<='9')){
            sum1 += s1[i]-'0';
        }
    }
    for(int i=0; i<len2; i++){
        if((s2[i]>='0') && (s2[i]<='9')){
            sum2 += s2[i]-'0';
        }
    }
    if(len1 != len2){
        return len1 < len2;
    }
    else{
        if(sum1 != sum2){
            return sum1 < sum2;
        }
        else{
            return s1 < s2;
        }
    }
}

string str[1001];

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    sort(str, str + n, cmp);
    for(int i=0; i<n; i++){
        cout << str[i] << "\n";
    }
}