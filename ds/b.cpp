//
//  main.cpp
//  b
//
//  Created by Altynay on 9/15/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;
int main(int argc, const char * argv[]) {
    queue <int> myQueue;
    string command;
    int m;
    while(cin >> command){
        if (command == "push"){
            cin >> m;
            myQueue.push(m);
            cout << "ok" << endl;
        } else
            if(command == "pop"){
                if (myQueue.size() != 0){
                    cout << myQueue.front() << endl;
                    myQueue.pop();
                }
                else {
                    cout << "error" << endl;
                }
            } else
                if (command == "front"){
                    if (myQueue.size() != 0){
                        cout << myQueue.front() << endl;
                    }
                    else{
                        cout << "error" << endl;
                    }
                } else
                    if(command == "size"){
                        cout << myQueue.size() << endl;
                    } else
                        if(command == "clear"){
                            while (!myQueue.empty()) {
                                myQueue.pop();
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
