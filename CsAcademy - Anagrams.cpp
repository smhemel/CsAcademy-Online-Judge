//
//  main.cpp
//  CsAcademy - Anagrams
//
//  Created by S M HEMEL on 16/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;
map <string,int>m;
int main()
{
    int n,Max = 0;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        m[s]++;
        if(m[s]>Max)
            Max = m[s];
    }
    cout << Max << endl;
    return 0;
}
