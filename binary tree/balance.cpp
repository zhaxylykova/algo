//
//  main.cpp
//  children
//
//  Created by Altynay on 10/14/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *right, *left;
    
    Node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

class Bst{
public:
    Node *root;
    Bst(){
        root = NULL;
    }
    Node *insert(Node *node, int data){
        if (node == NULL) {
            node = new Node(data);
            return node;
        }
        
        if (data < node -> data) {
            node -> left = insert(node -> left, data);
        }
        else if (data > node -> data){
            node -> right = insert(node -> right, data);
        }
        return node;
    }
    
    void inOrder(Node *node){
        if (node == NULL) {
            return;
        }
        inOrder(node -> left);
        cout << node -> data << " ";
        inOrder(node -> right);
        
    }
};
int height(Node *node){
    if (node == NULL) {
        return 0;
    }
    else{
        int left_side = height(node -> left);
        int right_side = height(node -> right);
        return (1 + max(left_side, right_side));
    }
}

bool balance(Node *node){
    int left;
    int right;
    if (node == NULL){
        return 1;
    }
    left = height(node -> left);
    right = height(node -> right);
    if (abs(left - right) <= 1 and balance(node -> right) and balance(node -> left)) {
        return 1;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    Bst *tree = new Bst();
    int num;
    while (cin >> num) {
        if (num == 0) {
            break;
        }
        else{
            tree -> root = tree -> insert(tree -> root, num);
        }
    }
    if (balance(tree -> root)) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
