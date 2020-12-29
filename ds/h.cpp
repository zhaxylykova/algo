//
//  main.cpp
//  h
//
//  Created by Altynay on 9/17/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    queue<pair<char, int>> goblins;
    queue<pair<char, int>> vip;
    queue<int> shaman;
    int n;
    cin >> n;
    char check;
    int i;
    while (cin >> check) {
        if (check == '+'){
            cin >> i;
            goblins.push(make_pair(check, i));
        }
        if (check == '*'){
            cin >> i;
            vip.push(make_pair(check, i));
            
        }
        if (check == '-'){
            cout << goblins.front().second << endl;
            goblins.pop();
        }
    }
    
    return 0;
}
