#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<string> vec0(n);
    vector<string> vec1(n);
    for(int i=0;i<n;i++){
        cin >> vec0.at(i) >> vec1.at(i);
    }
    string answer ="Yes";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(vec0.at(i)==vec0.at(j) || vec0.at(i)==vec1.at(j)){
                for(int k=0;k<n;k++){
                    if(i==k){
                        continue;
                    }
                    if(vec1.at(i)==vec0.at(k)||vec1.at(i)==vec1.at(k)){
                        answer ="No";
                    }
                }
            }
        }
    }
    cout << answer << endl;
}