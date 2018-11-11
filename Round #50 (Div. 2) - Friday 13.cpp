//
//  main.cpp
//  Round #50 (Div. 2) - Friday 13
//
//  Created by S M HEMEL on 27/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    if(s=="Sunday")
        cnt = 2;
    if(s=="Saturday")
        cnt = 1;
    if(s=="Monday")
        cnt = 2;
    if(s=="Tuesday")
        cnt = 2;
    if(s=="Wednesday")
        cnt = 1;
    if(s=="Thursday")
        cnt = 3;
    if(s=="Friday")
        cnt = 1;
    cout << cnt << endl;
    return 0;
}
