//
//  main.cpp
//  CsAcademy - Next Dance Move
//
//  Created by S M HEMEL on 14/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int a, arr[]={1, 2, 3, 1, 2, 3, 1, 2, 3, 4};
    cin >> a;
    cout << arr[(a-1)%10] << endl;
    return 0;
}
