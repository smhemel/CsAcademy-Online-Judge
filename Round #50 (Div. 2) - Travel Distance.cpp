//
//  main.cpp
//  Round #50 (Div. 2) - Travel Distance
//
//  Created by S M HEMEL on 27/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
set <char> S;
vector <char> v;
int main(){
    string s;
    int c = 0;
    cin >> s;
    int c1 = 0;
    for(int i=0; s[i]; i++){
        if(s[i]=='S') c++;
        if(s[i]=='N') c--;
       if(s[i]=='E') c1++;
       if(s[i]=='W') c1--;
    }
    cout << abs(abs(c)+abs(c1)) << endl;
    return 0;
}
