//
//  main.cpp
//  CsAcademy - Word Permutation
//
//  Created by S M HEMEL on 17/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
using namespace std;
string s[100001];
map <string,int> M;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> s[i];
        M[s[i]] = i;
    }
    sort(s,s+n+1);
    for(auto str: s){
        if(M[str])
            cout << M[str] << " ";
    }
    return 0;
}
