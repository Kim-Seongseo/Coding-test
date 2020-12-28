#include <stdio.h>
#include <string.h>

class Node{
public:
    Node* child[26];
    char data[100];
    Node(){
        for(int i=0; i<26; i++){
            child[i] = NULL;
        }
    }
};

Node root;

void add(Node* t, char name[20], char phoneNumber[20]){
    for(int i=0; name[i]!=0; i++){
        if(t->child[name[i] - 'a'] == NULL){
            t->child[name[i] - 'a'] = new Node();
        }
        t = t->child[name[i] - 'a'];
    }
    strcpy(t->data, phoneNumber);
}

Node* search(Node* t, char name[20]){
    for(int i=0; name[i]!=0; i++){
        if(t->child[name[i] - 'a'] == NULL){
            return NULL;
        }
        t = t->child[name[i] - 'a'];
    }
    return t;
}

char arr[20];

int main(){
    int tc, n;
    scanf("%d", &tc);
    for(int i=0; i<tc; i++){
        scanf("%d", &n);
        for(int j=0; j<n; j++){
            scanf("%s", arr);
            add(&root, "", arr);
        }
    }
    
    return 0;
}