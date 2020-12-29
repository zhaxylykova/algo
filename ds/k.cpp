//
//  main.cpp
//  k
//
//  Created by Altynay on 9/10/20.
//  Copyright © 2020 Altynay. All rights reserved.
//

#include <iostream>
using namespace std;
bool prime = true;
bool check_primes(int n){
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    if (check_primes(n) == true){
        cout << "prime" << endl;
    }
    else{
        cout << "composite" << endl;
    }
    
    
    return 0;
}
