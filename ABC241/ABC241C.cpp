#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<vector<char>>vec(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> vec.at(i).at(j);
        }
    }
    string ans ="No";
    for(int i=0;i<n;i++){
        for(int j=0;j<n-5;j++){
            int sum =0;
            for(int k=0;k<6;k++){
                if(vec.at(i).at(j+k) == '#'){
                    sum ++;
                }
            }
            if(sum >=4){
                ans = "Yes";
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-5;j++){
            int sum =0;
            for(int k=0;k<6;k++){
                if(vec.at(j+k).at(i) == '#'){
                    sum ++;
                }
            }
            if(sum >=4){
                ans = "Yes";
            }
        }
    }
    for(int i=0;i<n-5;i++){
        for(int j=0;j<n-5;j++){
            int sum =0;
            for(int k=0;k<6;k++){
                if(vec.at(i+k).at(j+k) == '#'){
                    sum ++;
                }
            }
            if(sum >=4){
                ans = "Yes";
            }
        }
    }
    for(int i=0;i<n-5;i++){
        for(int j=n-1;j>4;j--){
            int sum =0;
            for(int k=0;k<6;k++){
                if(vec.at(i+k).at(j-k) == '#'){
                    sum ++;
                }
            }
            if(sum >=4){
                ans = "Yes";
            }
        }
    }
    cout << ans << endl;

}