//
//  main.cpp
//  CsAcademy - Missing Number
//
//  Created by S M HEMEL on 11/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int ar[1111];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; cin >> ar[i],i++);
    sort(ar,ar+n);
    int ans = 1;
    for(int i=0; i<n; i++)
        if(ar[i]==ans)
            ans++;
    cout << ans << endl;
    return 0;
}
