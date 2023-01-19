#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n ;
    int y = (n/4)*4+2;
    if (y<n){
        y+=4;
    }
    cout << y << endl;
}
