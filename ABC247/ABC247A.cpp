#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    cout << 0 ;
    for(int i=0;i<3;i++){
        if(s.at(i)=='0'){
            cout << 0;
        }
        else{
            cout << 1;
        }
    }
    cout << endl;
}