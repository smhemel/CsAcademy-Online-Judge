//
//  main.cpp
//  Round #42 (Div. 2 only) - Double Replace
//
//  Created by S M HEMEL on 16/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
string s,a,b;
int main()
{
    cin >> s >> a >> b;
    int m = (int)s.length();
    int len = (int)a.length();
    int len1 = (int)b.length();
    for(int i=0; s[i]; i++){
        string t = "";
        if(s[i]==a[0]){
            for(int j=i; j<(len+i) && j<m; j++)
                t += s[j];
            if(t==a){
                cout << b;
                i += len-1;
                continue;
            }
            t.clear();
            t = "";
        }
        if(s[i]==b[0]){
            for(int j=i; j<(len1+i) && j<m; j++)
                t += s[j];
            if(t==b){
                cout << a;
                i += len1-1;
                continue;
            }
        }
        cout << s[i];
    }
    cout << endl;
    return 0;
}
