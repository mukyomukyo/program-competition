#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector <int> vec(n);
    for (int i=0; i<n; i++){
        cin >> vec.at(i);
    }
    reverse(vec.begin(), vec.end());
    for (int j=0;j<n-1;j++){
        cout << vec.at(j) <<" ";
    }
    cout << vec.at(n-1)<< endl;
    return 0;
}