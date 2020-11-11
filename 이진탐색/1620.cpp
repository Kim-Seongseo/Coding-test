#include <stdio.h>
#include <map>
#include <string>
#include <ctype.h>
#include<stdlib.h>
using namespace std;

char str[100];

int main(){
    map<int, string> m1;
    map<string, int> m2;

    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%s", str);
        m1.insert({i + 1, str});
        m2.insert({str, i + 1});
    }
    
    for(int i=0; i<m; i++){
        scanf("%s", str);
        if(isdigit(str[0]) != 0){
            pair<int, string> p = *m1.find(atoi(str));
            printf("%s\n", p.second.c_str());
        }
        else{
            pair<string, int> p = *m2.find(str);
            printf("%d\n", p.second);
        }
    }

    return 0;
}