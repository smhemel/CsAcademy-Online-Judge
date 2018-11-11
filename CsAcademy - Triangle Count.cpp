//
//  main.cpp
//  CsAcademy - Triangle Count
//
//  Created by S M HEMEL on 12/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[111];
int main()
{
    int m;
    cin >> m;
    for(int i=0; i<m; cin >> a[i],i++);
    sort(a,a+m,greater<int>());
    int cnt = 0;
    for(int i=0; i<m-2; i++){
        for(int j=i+1; j<m; j++){
            for(int l=j+1; l<m; l++){
                int x=a[i];
                int y=a[j];
                int z=a[l];
                int Max=max(x,max(y,z));
                if(Max==x){
                    if(y+z>x)
                        cnt++;
                }
                else if(Max==y){
                    if(x+z>y)
                        cnt++;
                    }
                else if(Max==z){
                    if(y+x>z)
                        cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
