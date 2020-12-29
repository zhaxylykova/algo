//
//  main.cpp
//  l
//
//  Created by Altynay on 9/10/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
using namespace std;
int gcd(int a, int b){
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
int lcm(int a, int b){
    return a / gcd(a, b) * b;
}
int main(int argc, const char * argv[]) {
    int N, K;
    cin >> N >> K;
    cout << lcm(N, K) << endl;
    return 0;
}
