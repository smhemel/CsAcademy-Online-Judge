//
//  main.cpp
//  CsAcademy - Matrix Rotations
//
//  Created by S M HEMEL on 2/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int input[100][100];
int output[100][100];
int main()
{
    int n,x;
    scanf("%d\n",&n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            cin >> x;
            if(x) {
                output[j][n-i-1]   = 1;
                output[n-i-1][n-j-1] = 1;
                output[n-j-1][i]   = 1;
                output[i][j]=1;
            }
        }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            printf("%d ",output[i][j]);
        printf("\n");
    }
    return 0;
}
