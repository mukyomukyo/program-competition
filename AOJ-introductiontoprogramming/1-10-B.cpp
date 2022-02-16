#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    double a, b, c;
    cin >> a>> b >> c;
    double PI = acos(-1);
    cout << fixed << setprecision(5);
    cout << a * b * sin(c* PI /180) /2 << endl;
    double d = sqrt(a*a + b*b -2*a*b*cos(c*PI/180));
    cout << a + b + d << endl;
    cout << b*sin(c*PI/180)<< endl;
}