//
//  main.cpp
//  CsAcademy - Attack and Speed
//
//  Created by S M HEMEL on 15/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    ll a,s,k,x,y;
    cin >> a >> s >> k >> x >> y;
    ll d = k/2;
    ll d1 = k%2 + d;
    ll t = a + d*x;
    ll cnt = d;
    ll t1 = s + d1*y;
    if(t==t1)
        return 0 * printf("%lld\n",cnt);
    else if(t<t1){
        while(t<t1){
            t += x;
            cnt++;
            t1 -= y;
        }
        if(t1==t)
            return 0 * printf("%lld\n",cnt);
        else
            puts("-1");
    }
    else{
        while(t>t1){
            t -= x;
            cnt--;
            t1 += y;
        }
        if(t1==t)
            return 0 * printf("%lld\n",cnt);
        else
            puts("-1");
    }
    return 0;
}
