//
//  main.cpp
//  count
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
int count(Node *node){
    if (node == NULL) {
        return 0;
    }
    else{
        return (1 + count(node -> left) + count(node -> right));
    }
}
int main(int argc, const char * argv[]) {
    Bst *tree = new Bst();
    int number;
    while (cin >> number) {
        if (number == 0) {
            break;
        }
        else{
            tree -> root = tree -> insert(tree -> root, number);
        }
    }
    cout << count(tree -> root)<< endl;
    return 0;
}
