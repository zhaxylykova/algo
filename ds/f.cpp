//
//  main.cpp
//  f
//
//  Created by Altynay on 9/17/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
bool is_right(string s) {
    stack<char> par;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            par.push(s[i]);
        else {
            if (par.empty())
                return false;
            if (par.top() == '(' && s[i] != ')')
                return false;
            if (par.top() == '[' && s[i] != ']')
                return false;
            if (par.top() == '{' && s[i] != '}')
                return false;
            par.pop();
        }
    }
    return (par.empty() == true);
}
int main(int argc, const char * argv[]) {
    stack<char> parentheses;
    
    string input;
    cin >> input;
    
    if (is_right(input)){
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
        
    }
    return 0;
    }
