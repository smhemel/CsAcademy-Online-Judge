//
//  main.cpp
//  CsAcademy - Constant Sum
//
//  Created by S M HEMEL on 12/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <assert.h>
using namespace std;
int a[111111],add[111111];
int main()
{
    int n,q,m,s,x,x1;
    cin >> n >> q;
    for(int i=1; i<=n; cin >> a[i],i++);
    double total = 0;
    while(q--) {
        cin >> x;
        if(x==0){
            cin >> m >> s;
            total += s;
            add[m] += s;
        }
        else{
            cin >> x1;
            double ans = (a[x1]+add[x1] - (((double)total-add[x1])/(n-1)));
            printf("%.10lf\n",ans);
        }
    }
    return 0;
}

