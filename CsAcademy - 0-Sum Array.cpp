//
//  main.cpp
//  CsAcademy - 0-Sum Array
//
//  Created by S M HEMEL on 19/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int main()
{
    int n,plus = 0,minus = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]<0)
            minus += abs(arr[i]);
        else
            plus += arr[i];
    }
    if(plus==minus){
        for(int i=0; i<n; i++)
            if(arr[i]==0)
                return 0 * printf("%d\n",i+1);
        return 0 * puts("-1");
    }
    int cnt = 0,p = 0;
    bool f = true;
    if(plus>minus){
        int t = plus-minus;
        if(t&1)
            return 0 * puts("-1");
        else{
            int d = t/2;
            for(int i=0; i<n; i++){
                if(arr[i]==d){
                    cnt++;
                    if(f){
                        p = i;
                        f = false;
                    }
                }
            }
            if(cnt>1)
                return 0 * printf("%d\n",(p+1));
            else
                return 0 * puts("-1");
        }
    }
    if(plus<minus){
        int t = minus-plus;
        if(t&1)
            return 0 * puts("-1");
        else{
            int d = t/2;
            for(int i=0; i<n; i++){
                if(arr[i]==(-d)){
                    cnt++;
                    if(f){
                        p = i;
                        f = false;
                    }
                }
            }
            if(cnt>1)
                return 0 * printf("%d\n",(p+1));
            else
                return 0 * puts("-1");
        }
    }
    puts("-1");
    return 0;
}
