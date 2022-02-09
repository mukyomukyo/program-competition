#include <bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cin >> a;
    const double PI = acos(-1);
    double b =a * a * PI;
    double c =2*a*PI;
    printf ("%.5lf %.5lf\n", b, c);
    return 0;
}