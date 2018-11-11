//
//  main.cpp
//  Round #50 (Div. 2) - Check Square
//
//  Created by S M HEMEL on 27/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
struct Point
{
    int x, y;
};
int distSq(Point p, Point q)
{
    return (p.x - q.x)*(p.x - q.x) +
    (p.y - q.y)*(p.y - q.y);
}
bool isSquare(Point p1, Point p2, Point p3, Point p4)
{
    int d2 = distSq(p1, p2);
    int d3 = distSq(p1, p3);
    int d4 = distSq(p1, p4);
    if (d2 == d3 && 2*d2 == d4)
    {
        int d = distSq(p2, p4);
        return (d == distSq(p3, p4) && d == d2);
    }
    if (d3 == d4 && 2*d3 == d2)
    {
        int d = distSq(p2, p3);
        return (d == distSq(p2, p4) && d == d3);
    }
    if (d2 == d4 && 2*d2 == d3)
    {
        int d = distSq(p2, p3);
        return (d == distSq(p3, p4) && d == d2);
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        Point p1, p2, p3,p4;
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;
        cin >> p4.x >> p4.y;
        isSquare(p1, p2, p3, p4)? cout << "1" << endl: cout << "0" << endl;
    }
    return 0;
}
