//
//  main.cpp
//  CsAcademy - Insert in Sorted Array
//
//  Created by S M HEMEL on 17/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int arr[100005];
int main() {
    int n, x;
    cin >> n >> x;
    for(int i=1; i<=n; i+=1)
        cin >> arr[i];
    arr[n + 1] = 1000000006;
    for(int i=1; i<=n+1; i+=1) {
        if(arr[i]>x) {
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}
