//
//  main.cpp
//  CsAcademy - Min Swap Counting
//
//  Created by S M HEMEL on 14/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int a[51111];
int main()
{
    int n,ans = 0, zero = 0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=n-1; i>=0; i--){
        if(!a[i])
            zero++;
        else
            ans += zero;
    }
    cout << ans << endl;
    return 0;
}
