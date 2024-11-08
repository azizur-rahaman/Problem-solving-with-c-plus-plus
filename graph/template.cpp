#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        left=right= NULL;
    }
}


void preOrder(Node node){
    if(node == NULL){
        return;
    }

    cout<<node.data<<endl;
    preOrder(node.left);
    preOrder(node.right);
}