//
//  main.cpp
//  CsAcademy - Vector Size
//
//  Created by S M HEMEL on 15/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n,x;
    int Max = 0,cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x==1)
            cnt++;
        else{
            cnt--;
            if(cnt<0)
                cnt = 0;
        }
        if(Max<cnt)
            Max = cnt;
    }
    cout << Max << endl;
    return 0;
}
