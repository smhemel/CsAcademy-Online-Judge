//
//  main.cpp
//  CsAcademy - Best Array Cut
//
//  Created by S M HEMEL on 22/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

//
//  main.cpp
//  CsAcademy - Best Array Cut
//
//  Created by S M HEMEL on 22/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[100011],sum[100011];
int ans = 1e9;
int main(){
    ios_base::sync_with_stdio(0);
    int n,total = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        total += a[i];
        sum[i] = total;
    }
    int temp = sum[n-1];
    for(int i=0; i+1<n; i++){
        int d = abs(sum[i]-(temp-sum[i]));
        if(d<ans)
            ans = d;
    }
    cout << ans << endl;
    return 0;
}
