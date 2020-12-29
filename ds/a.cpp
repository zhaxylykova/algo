//
//  main.cpp
//  a
//
//  Created by Altynay on 9/10/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
int main(int argc, const char * argv[]) {
    stack<int> st;
    string command;
    int n;
    while (cin >> command){
        
        if (command == "push"){
            cin >> n;
            st.push(n);
            cout << "ok" << endl;
        } else
        if (command == "pop"){
            if (st.size() != 0){
                cout << st.top() << endl;
                st.pop();
            } else {
                cout << "error" << endl;
            }
               } else
        if (command == "back"){
            if (st.size() != 0){
                cout << st.top() << endl;
            } else {
                cout << "error" << endl;
            }
               } else
        if (command == "size"){
            cout << st.size() << endl;
               } else
        if (command == "clear"){
            while(!st.empty()){
                st.pop();
                }
            cout << "ok" << endl;
            
        } else
        if (command == "exit"){
            cout << "bye" << endl;
            break;
               }
    }
    
    return 0;
}
