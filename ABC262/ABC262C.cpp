#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >>n;
    vector<int>vec(n+1);
    for (int i =1;i<n+1;i++){
        cin >> vec.at(i);
    }
    long long int count=0,sub = 0;
    for (int i =1;i<n+1;i++){
        int y = vec.at(i);
        if (i==vec.at(y)&& y!=i){
            count ++;
        }
        if (y ==i){
            sub ++;
        }
    }
    count/=2;
    count += sub*(sub-1)/2;
    cout << count << endl;
}

