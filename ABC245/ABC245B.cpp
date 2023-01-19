#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    for(int i=0;i<2001;i++){
        bool tempans = false;
        for(int j=0;j<n;j++){
            if (vec.at(j)==i){
                tempans =true;
            }
        }
        if(!tempans){
            cout << i << endl;
            break;
        }
    }
}