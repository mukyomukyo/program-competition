#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    int n =s.size();
    vector<char>vec(n);
    for(int i=0;i<n;i++){
        vec.at(i) =s.at(i); 
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        cout << vec.at(i) ;
    }
    cout << endl;
}