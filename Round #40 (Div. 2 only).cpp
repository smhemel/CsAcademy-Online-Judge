//
//  main.cpp
//  Round #40 (Div. 2 only)
//
//  Created by S M HEMEL on 2/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

//A - Erase Value
#include <iostream>
using namespace std;
int a[1111];
int cnt[1111];
int main() {
    int n,Max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i=0; i<n; i++){
        int temp = a[i]*cnt[a[i]];
        if(Max<temp)
            Max = temp;
    }
    int ans = 0;
    for(int i=0; i<n; i++)
        ans += a[i];
    cout << ans-Max << endl;
    return 0;
}



//Move The Bishop
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==c && b==d)
        return 0 * puts("0");
    if(abs(a-c)==abs(b-d))
        return 0 * puts("1");
    else{
        for(int i=a,j=b; i<=8 && j<=8; i++,j++)
            if(abs(i-c)==abs(j-d))
                return 0 * puts("2");
        for(int i=a,j=b; i>=1 && j>=1; i--,j--)
            if(abs(i-c)==abs(j-d))
                return 0 * puts("2");
        for(int i=a,j=b; i>=1 && j<=8; i--,j++)
            if(abs(i-c)==abs(j-d))
                return 0 * puts("2");
        for(int i=a,j=b; i<=8 && j>=1; i++,j--)
            if(abs(i-c)==abs(j-d))
                return 0 * puts("2");
    }
    puts("-1");
    return 0;
}
