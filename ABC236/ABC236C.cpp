#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >>m ;
    vector<string> all(n);
    vector<string> express(m);
    for(int i=0;i<n;i++){
        cin >> all.at(i);
    }
    for(int i=0;i<m;i++){
        cin >> express.at(i);
    }
    vector<bool> ans(n); 
    for(int i=0;i<n;){
        for(int j=0;j<m;){
            if(all.at(i) ==express.at(j)){
                ans.at(i)= 1;
                i++;
                j++;
            }
            else{
                ans.at(i) =0;
                i++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(ans.at(i)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}