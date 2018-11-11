//
//  main.cpp
//  Round #37 (Div. 2 only) - Group Split
//
//  Created by S M HEMEL on 7/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool check[10000000];
vector <int> v;
//call by miller_rabin(n,18)
typedef unsigned long long ll;
ll mulmod(ll a, ll b, ll c){
    ll x = 0,y = a%c;
    while(b>0){
        if(b&1)
            x = (x+y)%c;
        y = (y<<1)%c;
        b >>= 1;
    }
    return x;
}

ll pow(ll a, ll b, ll c){
    ll x = 1, y = a;
    
    while(b>0){
        if(b&1) x = mulmod(x,y,c);
        y = mulmod(y,y,c);
        b >>= 1;
    }
    return x;
}

bool miller_rabin(ll p, int it)
{
    if(p<2 || !(p&1)) return false;
    if(p==2) return true;
    
    ll s = p-1;
    while(s%2==0)
        s >>= 1;
    
    while(it--){
        ll a = rand()%(p-1)+1,temp = s;
        ll mod = pow(a,temp,p);
        if(mod==-1 || mod==1)
            continue;
        while(temp!=p-1 && mod!=p-1){
            mod = mulmod(mod,mod,p);
            temp <<= 1;
        }
        if(mod!=p-1)
            return false;
    }
    return true;
}
int cnt[1000000];
int main()
{
    int n;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            if(check[i]==0){
                v.push_back(i);
                check[i] = 1;
            }
            while(n%i==0) {
                n /= i;
                cnt[i]++;
            }
            i = 2;
        }
        if(miller_rabin(n,18)){
            cnt[n]++;
            v.push_back(n);
            break;
        }
    }
    ll ans = 1;
    for(int i=0; i<v.size(); i++)
        ans *= (cnt[v[i]]+1);
    cout << ans-1 << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

// function to print the divisors
void printDivisors(int n)
{
    int ans = 0;
    vector<int> v;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (n/i == i) // check if divisors are equal
                ans++;
            else
            {
                ans++;
                v.push_back(n/i);
            }
        }
    }
    
    // The vector will be printed in reverse
    for (int i=v.size()-1; i>=0; i--)
        ans++;
    cout << ans-1 << endl;
}

/* Driver program to test above function */
int main()
{
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}

