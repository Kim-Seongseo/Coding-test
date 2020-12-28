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

void add(Node* t, const char name[20], const char phoneNumber[20]){
    for(int i=0; name[i]!=0; i++){
        if(t->child[name[i] - 'a'] == NULL){
            t->child[name[i] - 'a'] = new Node();
        }
        t = t->child[name[i] - 'a'];
    }
    strcpy(t->data, phoneNumber);
}

Node* search(Node* t, const char name[20]){
    for(int i=0; name[i]!=0; i++){
        if(t->child[name[i] - 'a'] == NULL){
            return NULL;
        }
        t = t->child[name[i] - 'a'];
    }
    return t;
}

int main(){
    add(&root, "app", "015");
    add(&root, "apple", "12345");
    add(&root, "aps", "59");
    
    Node* t = search(&root, "apple");
    printf("%s\n", t->data);
    t = search(&root, "aps");
    printf("%s\n", t->data);
    t = search(&root, "app");
    printf("%s\n", t->data);
    
    return 0;
}