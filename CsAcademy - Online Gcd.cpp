//
//  main.cpp
//  CsAcademy - Online Gcd
//
//  Created by S M HEMEL on 21/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
int a[100011];
int main() {
    int g = 0,n,m,x,y;
    cin >> n >> m;
    cin >> a[0];
    g = a[0];
    for(int i=1; i<n; i++){
        cin >> a[i];
        g = __gcd(g,a[i]);
    }
    for(int i=0; i<m; i++){
        cin >> x >> y;
        x--;
        a[x] = a[x]/y;
        g = __gcd(g,a[x]);
        cout << g << endl;
    }
    return 0;
}
