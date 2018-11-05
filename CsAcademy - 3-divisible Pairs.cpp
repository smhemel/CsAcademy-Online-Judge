//
//  main.cpp
//  CsAcademy - 3-divisible Pairs
//
//  Created by S M HEMEL on 15/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#define ll long long int
#define N 111111
using namespace std;
ll one[N],two[N],three[N];
int main()
{
    ll m,x,ans = 0;
    ll l=0,j=0,k=0;
    cin >> m;
    for(int i=0; i<m; i++){
        scanf("%lld",&x);
        if((3-(x%3))==1)
            one[l++] = x;
        else if((3-(x%3))==2)
            two[j++] = x;
        else if(x%3==0)
            three[k++] = x;
    }
    
    ans = (k*(k-1))/2 + (l*j);
    cout << ans << endl;
    return 0;
}
