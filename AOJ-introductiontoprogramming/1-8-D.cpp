#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string a,b;
    cin >> a>> b;
    a = a + a;
    if ( a.find(b) == string::npos ) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
    return 0;
}