#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<double>x(n);
    vector<double>y(n);
    double p1=0, p2=0, p3=0 ,p4=0;
    for (int i=0; i<n; i++){
        cin >> x.at(i);
    }
    for (int i=0; i<n; i++){
        cin >> y.at(i);
    }
    for (int i=0; i<n; i++){
        p1 += abs(x.at(i)-y.at(i));
        p2 += (x.at(i)-y.at(i))*(x.at(i)-y.at(i));
        p3 += abs((x.at(i)-y.at(i))*(x.at(i)-y.at(i))* (x.at(i)-y.at(i)));
        p4 =max(p4,abs(x.at(i)-y.at(i)));
    }
    cout << fixed << setprecision(5);
    cout << p1 << endl << sqrt(p2) << endl << cbrt(p3) << endl << p4 << endl;
}