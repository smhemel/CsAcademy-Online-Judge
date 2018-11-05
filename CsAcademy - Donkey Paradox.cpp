//
//  main.cpp
//  CsAcademy - Donkey Paradox
//
//  Created by S M HEMEL on 26/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
struct my{
    int x,y;
}a[3];
int main() {
    cin >> a[0].x >> a[0].y;
    cin >> a[1].x >> a[1].y;
    cin >> a[2].x >> a[2].y;
    int cnt = 0;
    for(int i=1; i<=a[0].x; i++)
        for( int l=1; l<=a[0].y; l++)
            if(abs(i-a[1].x)+abs(l-a[1].y)==abs(i-a[2].x)+abs(l-a[2].y))
                cnt++;
    cout << cnt << endl;
    return 0;
}
