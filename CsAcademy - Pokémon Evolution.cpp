//
//  main.cpp
//  CsAcademy - Pokémon Evolution
//
//  Created by S M HEMEL on 27/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int main() {
    ll n,m,x,y;
    cin >> n >> m >> x >> y;
    if((y*n+m)<x)
        return 0 * puts("0");
    ll ans = 0;
    ans = m/x;
    if(n<=ans)
        return 0 * printf("%lld\n",n);
    n = n-ans;
    m = m%x;
    if(x==y || n==1 || n==0)
       return 0 * printf("%lld\n",(ll)(ans+(ll)(n/2)));
    ll div = n/(x+y);
    ll left = (div*x)*x;
    ll right = ((div*y)*y)+m;
    left += (n%(x+y))*x;
    if(left<right){
        while (true) {
            left+=x;
            right -=y;
            if(left==right)
                return 0 * printf("%lld\n",ans+(ll)left/x);
            if(left>right)
                return 0 * printf("%lld\n",ans+(ll)((left-x)/x));
        }
    }
    if(left>right){
        while (true) {
            left -= x;
            right += y;
            if(left<=right)
                return 0 * printf("%lld\n",ans+(ll)(left/x));
        }
    }
    
    return 0;
}
