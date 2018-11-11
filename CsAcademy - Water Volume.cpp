//
//  main.cpp
//  CsAcademy - Water Volume
//
//  Created by S M HEMEL on 18/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,Max = 0,cnt = 0,x,y,Min = 999999999;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(x){
            cnt -= y;
            Min = min(Min,cnt);
        }
        else
            cnt += y;
        Max = max(Max,cnt);
    }
    cout << Max-Min << endl;
    return 0;
}
