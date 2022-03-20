#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin  >>n;
    vector<int>vec(n);
    for (int i=0;i<4*n-1 ;i++){
        int a;
        cin  >> a;
        vec.at(a-1) ++;
    }
    for(int i=0;i<n;i++){
        if(vec.at(i) == 3){
            cout << i+1 << endl;
        }
    }
}