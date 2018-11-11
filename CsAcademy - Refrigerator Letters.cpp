//
//  main.cpp
//  CsAcademy - Refrigerator Letters
//
//  Created by S M HEMEL on 17/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int a[200];
string s;
int main() {
    int n;
    char c;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c;
        a[c]++;
    }
    int cnt = 0;
    cin >> s;
    for(auto x: s){
        if(a[x]>0)
            a[x]--;
        else
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
