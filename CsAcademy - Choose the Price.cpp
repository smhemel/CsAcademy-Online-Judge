//
//  main.cpp
//  CsAcademy - Choose the Price
//
//  Created by S M HEMEL on 21/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[1111];
int main()
{
    int n,ans = 0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    for(int i=n-1,j=1; i>=0; i--,j++)
        ans = max(ans,(j*a[i]));
    cout << ans << endl;
    return 0;
}
