#include<iostream>
using namespace std;

struct Node{
    int data;
    struct *left;
    struct *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
}

int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);

}