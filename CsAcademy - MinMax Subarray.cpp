//
//  main.cpp
//  CsAcademy - MinMax Subarray
//
//  Created by S M HEMEL on 21/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int inf = 0x3f3f3f3f;
int main() {
    int n,x;
    cin >> n;
    vector<int> elements;
    elements.reserve(n);
    for(int i=0; i<n; i++) {
        cin >> x;
        elements.push_back(x);
    }
    int mn = *min_element(elements.begin(), elements.end());
    int mx = *max_element(elements.begin(), elements.end());
    
    int last_min = -inf, last_max = -inf/2;
    int result = +inf;
    int size = (int)elements.size();
    for(int i=0; i<size; i++) {
        if(elements[i]==mn)
            last_min = i;
        if(elements[i]==mx)
            last_max = i;
        result = min(result, abs(last_min - last_max) + 1);
    }
    
    cout << result << endl;
    return 0;
}

