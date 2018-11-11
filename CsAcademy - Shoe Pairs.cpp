//
//  main.cpp
//  CsAcademy - Shoe Pairs
//
//  Created by S M HEMEL on 15/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <utility>
using namespace std;
pair <int,int> p[1001];
int main()
{
    int m,n,Max = 0;
    char s;
    cin >> m;
    while (m--) {
        cin >> n >> s;
        if(s=='L')
            p[n].first++;
        else
            p[n].second++;
        Max = max(Max,n);
    }
    int cnt = 0;
    for(int i=0; i<=Max; i++){
        cnt += min(p[i].first,p[i].second);
    }
    cout << cnt << endl;
    return 0;
}
