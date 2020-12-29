//
//  main.cpp
//  c
//
//  Created by Altynay on 9/15/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;
int main(int argc, const char * argv[]) {
    deque<int> myDeque;
    string command;
    int n;
    
    while (cin >> command) {
        if (command == "push_front"){
            cin >> n;
            myDeque.push_front(n);
            cout << "ok" << endl;
        } else
            if(command == "push_back"){
                cin >> n;
                myDeque.push_back(n);
                cout << "ok" << endl;
            } else
                if (command == "pop_front"){
                    if (myDeque.size() != 0){
                        cout << myDeque.front() << endl;
                        myDeque.pop_front();
                    }
                    else {
                        cout << "error" << endl;
                    }
                } else
                    if (command == "pop_back"){
                        if (myDeque.size() != 0){
                            cout << myDeque.back() << endl;
                            myDeque.pop_back();
                        }
                        else {
                            cout << "error" << endl;
                        }
                    } else
                        if (command == "front"){
                            if (myDeque.size() != 0){
                                cout << myDeque.front() << endl;
                        }else {
                            cout << "error" << endl;
                        }
                        } else
                            if (command == "back"){
                                if (myDeque.size() != 0) {
                                    cout << myDeque.back() << endl;
                                } else {
                                    cout << "error" << endl;
                                }
                                
                            } else
                                if (command == "size"){
                                    cout << myDeque.size() << endl;
                                } else
                                    if (command == "clear"){
                                        while (!myDeque.empty()) {
                                            myDeque.pop_back();
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
