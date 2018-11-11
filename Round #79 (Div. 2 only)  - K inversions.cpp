//
//  main.cpp
//  Round #79 (Div. 2 only)  - K inversions
//
//  Created by S M HEMEL on 9/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    long long a, b, k , i=0, j=1;
    cin >> a >> b;
    for(i=1;b<((a-i)*(a-i-1)/2);i++)
        cout<<i<<" ";
    while(b>=(j*(j-1))/2) j++;
    k = a-((j*(j-1))/2-b);
    if(k>0)
        cout<<k<<" ";
    for (j=a; j>k; j--)
        cout<<j<<" ";
    for (j=k-1 ; j>=i; j--)
        cout<<j<<" ";
    return 0;
}
