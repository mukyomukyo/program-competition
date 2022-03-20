#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    multiset<int>vec;
    cin >> n >> k;
    for(int i=0;i<k-1;i++){
        int s;
        cin >> s;
        vec.insert(s);
    }
    for(int i=k-1;i<n;i++){
        int s;
        cin >>s;
        vec.insert(s);
        auto it =vec.begin();
        advance(it,i-k+1);
        cout << *it << endl;
        it++;
    }
}