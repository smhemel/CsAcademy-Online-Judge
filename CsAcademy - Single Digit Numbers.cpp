//
//  main.cpp
//  CsAcademy - Single Digit Numbers
//
//  Created by S M HEMEL on 13/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n,m,cnt = 0;
    cin >> n >> m;
    if(m<n) swap(n,m);
    while(n<10 && n<m){
        cnt++;
        n++;
    }
    for(int i=1; i<10; i++){
        int d = 10;
        int temp = d*i+i;
        while(temp<=m) {
            if(temp>=n)
                cnt++;
            d *= 10;
            temp = d*i+temp;
        }
    }
    cout << cnt << endl;
    return 0;
}
