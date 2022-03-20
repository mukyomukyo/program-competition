#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        int64_t a,s;
        cin >> a >> s;
        if(s-2*a >=0 &&((s-2*a) & a) ==0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}