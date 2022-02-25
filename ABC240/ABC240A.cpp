#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (abs(b-a)==1 || abs(b-a)==9){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}