#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin >>s;
    vector<int>vec(2010);
    vec.at(3) =1;
    vec.at(4) =1;
    vec.at(5) =1;
    for(int i=6;i<=s;i++){
        vec.at(i) =(vec.at(i-1) +vec.at(i-3)) % 1000000007;
    }
    cout << vec.at(s) << endl;
}