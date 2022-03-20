#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    int a,b;
    cin >> a >>b;
    char c1=n.at(a-1), c2=n.at(b-1);
    n.at(a-1) =c2;
    n.at(b-1) =c1;
    cout << n << endl;
}