#include <stdio.h>
#include <map>
#include <string>
using namespace std;

int main(){
    map<int, string> m;
    
    int num;
    char str[100];

    for(int i=0; i<3; i++){
        scanf("%d", &num);
        scanf("%s", str);
        m.insert({num, str});
    }

    printf("------------------\n");
    
    while(1){
        scanf("%d", &num);
        pair<int, string> p = *m.find(num);
        printf("%d %s\n", p.first, p.second.c_str());
    }

    return 0;
}