//
//  main.cpp
//  CsAcademy - Decreasing Subarrays
//
//  Created by S M HEMEL on 18/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int last_element = 1e9;
    int len = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if(x<last_element)
            len++;
        else {
            for(int j=0; j<len; j++)
                cout << len << ' ';
            len = 1;
        }
        last_element = x;
    }
    for(int j=0; j<len; j++) {
        cout << len << ' ';
    }
    return 0;
}
