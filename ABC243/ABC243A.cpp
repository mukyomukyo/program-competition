#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f,m,t;
    cin >> n >> f >> m >> t;
    int left = n % (f+m+t) ;
    if (left < f){
        cout << 'F' << endl;
    }
    else if(left < f + m){
        cout << 'M' << endl;
    }
    else {
        cout << 'T' << endl;
    }
}