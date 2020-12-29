//
//  main.cpp
//  d
//
//  Created by Altynay on 9/17/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    queue<pair<int, string>> nine;
    queue<pair<int, string>> ten;
    queue<pair<int, string>> eleven;
    int grade;
    string surname;
    while(cin >> grade){
        if (grade == 9){
            cin >> surname;
            nine.push(make_pair(grade, surname));
        } else
        if (grade == 10){
            cin >> surname;
            ten.push(make_pair(grade, surname));
        } else
        if (grade == 11){
            cin >> surname;
            eleven.push(make_pair(grade, surname));
        }
    }
    while (!nine.empty()) {
        cout << nine.front().first << " " << nine.front().second << endl;
        nine.pop();
    }
    while (!ten.empty()) {
        cout << ten.front().first << " " << ten.front().second << endl;
        ten.pop();
    }
    while (!eleven.empty()) {
        cout << eleven.front().first << " " << eleven.front().second << endl;
        eleven.pop();
    }
    return 0;
}
