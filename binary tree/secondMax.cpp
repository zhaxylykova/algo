//
//  main.cpp
//  secondMax
//
//  Created by Altynay on 10/17/20.
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
int firstMax(Node *node){
    if (node -> right == NULL) {
        return node ->data;
    }
    return firstMax(node -> right);
}

int secondMax(Node *node){
    if (node == NULL) {
        return -1;
    }
    if (node->right == NULL and node -> left != NULL) {
        return firstMax(node -> left);
    }
    if (node -> right != NULL) {
        if (node -> right -> right == NULL and node -> right ->left == NULL) {
            return node -> data;
        }
    }
    return secondMax(node -> right);
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
    cout << secondMax(tree -> root) << endl;
    return 0;
}
