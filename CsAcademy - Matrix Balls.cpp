//
//  main.cpp
//  CsAcademy - Matrix Balls
//
//  Created by S M HEMEL on 28/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll ee,rr,mark1[600][600],mark2[600][600],ans[600][600],matrix[600][600],n,m;
ll dx[]={1,0,0,1,-1,-1,1,-1};
ll dy[]={1,1,-1,0,0,-1,-1,1};
void dfs(ll x,ll y,ll s,ll e){
    ll x1=-1,y1=-1,k;
    k = matrix[x][y];
    for(ll i=0; i<8; i++){
        ll a = x+dx[i];
        ll b = y+dy[i];
        if(a<1 || a>n || b<1 || b>m)continue;
        if(k>matrix[a][b]){
            k = matrix[a][b];
            x1 = a; y1 = b;
        }
    }
    if(x1==-1 && y1==-1){
        ans[x][y]++;
        mark1[s][e]=x;
        mark2[s][e]=y;
    }
    else{
        if(mark1[x1][y1]!=0 && mark2[x1][y1]!=0){
            ll temp = x1;
            x1 = mark1[x1][y1];
            y1 = mark2[temp][y1];
            ans[x1][y1]++;
            mark1[s][e]=x1;
            mark2[s][e]=y1;
        }
        else dfs(x1,y1,s,e);
    }
}
int main() {
    scanf("%lld%lld",&n,&m);
    memset(mark1,0,sizeof(mark1));
    memset(mark2,0,sizeof(mark2));
    for(ll i=1; i<=n; i++)
        for(ll j=1; j<=m; j++)
            scanf("%lld",&matrix[i][j]);
    for(ll i=1; i<=n; i++)
        for(ll j=1; j<=m; j++)
            dfs(i,j,i,j);
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++)
            printf("%lld ",ans[i][j]);
        printf(" \n");
    }
    return 0;
}
