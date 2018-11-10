//
//  main.cpp
//  CsAcademy - Minimize Max Diff
//
//  Created by S M HEMEL on 14/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <deque>
#include <cstdio>
using namespace std;
int a[100010],n,k;
deque<pair<int,int> > q;
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++)
        scanf("%d", a+i);
    for(int i=1; i<n-k; i++) {
        int dif = a[i] - a[i-1];
        while (!q.empty() && dif > q.back().first)
            q.pop_back();
        q.push_back(make_pair(dif, i-1));
    }
    int res = q.front().first;
    for(int i=0; i<k; i++) {
        if(i==q.front().second)
            q.pop_front();
        int dif = a[n-k+i]-a[n-k+i-1];
        while (!q.empty() && dif > q.back().first)
            q.pop_back();
        q.push_back(make_pair(dif, n-k+i-1));
        res = min(res, q.front().first);
    }
    printf("%d\n",res);
    return 0;
}
