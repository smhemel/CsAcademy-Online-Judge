//
//  main.cpp
//  CsAcademy - Cinema Seats
//
//  Created by S M HEMEL on 17/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
string s;
vector<int> v;
int main() {
    string t = "1";
    cin >> s;
    s += t;
    s.insert(0, t);
    int zeroC = 0;
    int len = (int)s.size();
    for(int i=0; i<len; i++)
        if(s[i] == '1') v.push_back(i);
        else zeroC++;
    int ans = 0;
    for(int i=0; i<v.size()-2; i++)
        ans = max(v[i+2]-v[i]-1,ans);
    
    cout << min(zeroC, ans) << endl;
    return 0;
}
