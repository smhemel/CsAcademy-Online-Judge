//
//  main.cpp
//  CsAcademy - Min Pairing
//
//  Created by S M HEMEL on 15/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int arr[1011];
int a[1011];
int main()
{
    int n,x,Max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        arr[x]++;
        Max = max(Max,x);
    }
    int k = 0,ans = 0;
    for(int i=0; i<=Max; i++)
        if(arr[i])
            if(arr[i]%2)
                a[k++] = i;
    sort(a,a+k);
    for(int i=k-1; i>=0; i-=2){
        ans += a[i]-a[i-1];
    }
    cout << ans << endl;
    return 0;
}
