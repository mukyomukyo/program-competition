#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec(10);
    for (int i=0;i<10;i++){
        cin >> vec.at(i);
    }
    int a=0;
    for(int i=0;i<3;i++){
        a= vec.at(a);
    }
    cout << a << endl;
}