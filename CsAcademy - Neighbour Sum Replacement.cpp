//
//  main.cpp
//  CsAcademy - Neighbour Sum Replacement
//
//  Created by S M HEMEL on 11/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int arr[1111];
int main(){
    int n;
    cin >> n;
    cout << n << endl;
    for(int i=1; i<=n; cin >> arr[i],i++);
    arr[0] = arr[n];
    arr[n+1] = arr[1];
    for(int i=1; i<=n; i++)
        cout << arr[i-1]+arr[i+1] << " ";
    return 0;
}
