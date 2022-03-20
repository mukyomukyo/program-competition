#include<bits/stdc++.h>
using namespace std;
int main(){
    char a1,a2,a3,s1,s2,s3;
    cin >> a1 >> a2 >> a3 >> s1 >> s2 >> s3;
    if(s1== a1&& s2 == a2&& s3 ==a3){
        cout << "Yes" << endl;
    }
    else if(s1== a3&& s2 == a1&& s3 ==a2){
        cout << "Yes" << endl;
    }
    else if(s1== a2&& s2 == a3&& s3 ==a1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}