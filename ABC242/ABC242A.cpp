#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,x;
    cin >> a >> b >> c >>x;
    if(x<=a){
        cout << 1.0000000 << endl;
    }
    else if(x<=b){
        cout << setprecision(10) ;
        cout << c/(b-a) << endl;
    }
    else {
        cout << 0.0000000 << endl;
    }
}