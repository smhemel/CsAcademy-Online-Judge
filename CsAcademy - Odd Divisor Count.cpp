//
//  main.cpp
//  CsAcademy - Odd Divisor Count
//
//  Created by S M HEMEL on 17/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int cnt(int x){
    int ans = 0;
    for(int i=1; i<=x; i++){
        if(x%i==0)
            ans++;
    }
    return ans;
}
int main()
{
    int n,m,ans = 0;
    cin >> n >> m;
    for(int i=n; i<=m; i++){
        if(cnt(i)&1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
