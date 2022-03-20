#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin >>n;
    long int a=1;
    for(int i=0;i<31;i++){
        a*=2;
    }
    if(n<a && n>= a *(-1)){
        cout << "Yes" << endl;       
    }
    else{
        cout << "No" << endl;
    }
}