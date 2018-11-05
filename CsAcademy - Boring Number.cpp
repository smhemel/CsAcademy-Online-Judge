//
//  main.cpp
//  CsAcademy - Boring Number
//
//  Created by S M HEMEL on 20/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
const int M = 1001;
int v[M];
int main() {
    ios_base::sync_with_stdio(0);
    int n, sum = 0;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    int answer = 1000000000, p = 0;
    for(int i=1; i<=n; i++)
        if(abs(n*v[i]-sum)<answer) {
            answer = abs(n*v[i]-sum);
            p = i;
        }
    printf("%d\n", p);
    return 0;
}
