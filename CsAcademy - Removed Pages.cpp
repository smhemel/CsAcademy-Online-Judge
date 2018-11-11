//
//  main.cpp
//  CsAcademy - Removed Pages
//
//  Created by S M HEMEL on 17/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[10001];
int main()
{
    int n,cnt = 0;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    sort(a,a+n);
    for(int i=0; i<n; ){
        if((a[i+1]-a[i])==1){
            if(a[i]%2 && !(a[i+1]%2)){
                cnt++;
                i+= 2;
            }
            else{
                cnt++;
                i++;
            }
        }
        else{
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}
