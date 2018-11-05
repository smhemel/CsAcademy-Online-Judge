//
//  main.cpp
//  CsAcademy - Bicycle Rental
//
//  Created by S M HEMEL on 18/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int best = 1e9;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        best = min(best, max(a, b) + c);
    }
    cout << best << endl;
}
