//
//  main.cpp
//  CsAcademy - Kth Special Number
//
//  Created by S M HEMEL on 14/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
bool check(string s) {
    int cnt = 0;
    for(auto u: s){
        if(u=='1') cnt++;
        else cnt = 0;
        if(cnt>=2)
            return false;
    }
    return true;
}
int main() {
    int m,cnt=0;
    cin >> m;
    for(int i=1; ;i++){
        string binary = bitset<64>(i).to_string();
        if(check(binary)){
            cnt++;
            if(cnt==m)
                return 0 * printf("%d\n",i);
        }
    }
    return 0;
}
