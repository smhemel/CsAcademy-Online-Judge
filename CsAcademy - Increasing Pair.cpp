//
//  main.cpp
//  CsAcademy - Increasing Pair
//
//  Created by S M HEMEL on 14/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
int x[211111];
int main() {
    int m,z;
    cin >> m;
    for(int i=1; i<=m; i++){
        cin >> z;
        x[z] = i;
    }
    int position = m+1,dis = -1;
    for(int i=1; i<=m; i++){
        dis = max(dis,(x[i]-position));
        position = min(position,x[i]);
    }
    cout << dis << endl;
    return 0;
}
