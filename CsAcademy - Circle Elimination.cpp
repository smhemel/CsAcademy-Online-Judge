//
//  main.cpp
//  CsAcademy - Circle Elimination
//
//  Created by S M HEMEL on 14/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <map>
#define ll long long int
using namespace std;
ll b[211111];
map <ll,ll> M;
int main()
{
    ll m;
    cin >> m;
    for(int i=1; i<=m; i++){
        cin >> b[i];
        M[b[i]] = i;
    }
    ll ans = 0;
    sort(b,b+m+1);
    ll d = M[b[1]];
    for(int i=1; i<=m; i++){
        ll t = M[b[i]];
        ll temp = abs(d-t);
        d = t;
        ans += min(temp,(m-temp));
    }
    cout << ans << endl;
    return 0;
}
