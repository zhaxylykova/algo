//
//  main.cpp
//  j
//
//  Created by Altynay on 9/10/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
using namespace std;
int greatestcommondivisor(int a, int b){
    while(a != 0 && b != 0){
        if (a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
        return a + b;
}
int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    cout << greatestcommondivisor(a, b) << endl;
    return 0;
}
