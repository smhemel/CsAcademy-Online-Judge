//
//  main.cpp
//  CsAcademy - Squarish Rectangle
//
//  Created by S M HEMEL on 11/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int height, width;
    cin >> height >> width;
    long long area = 1LL * height * width;
    long long ans = area-1;
    for (int len=2; len*len<=area; len++)
        if (area%len==0)
            ans = area/len - len;
    cout << ans << endl;
    return 0;
}
