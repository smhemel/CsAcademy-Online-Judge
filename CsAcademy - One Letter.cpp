//
//  main.cpp
//  CsAcademy - One Letter
//
//  Created by S M HEMEL on 19/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s,ans;
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        sort(s.begin(),s.end());
        ans += s[0];;
    }
    sort(ans.begin(),ans.end());
    cout << ans <<endl;
    return 0;
}
