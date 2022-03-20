#include<bits/stdc++.h>
using namespace std;
bool used [20];
int n;
vector<vector<int>> value(20,vector<int>(20));
vector<pair<int,int>>vec;
int calc(){
    if(vec.size()==n){
        int ans=0;
        for(auto p :vec){
            ans ^= (value.at(p.first).at(p.second));
        }
        return ans;
    }
    int m;
    for(int i=1;i<=2*n;i++){
        if(!used[i]){
            m = i;
            break;
        }
    }
    used[m] =true;
    int ans = 0;
    for(int i=1;i<=2*n;i++){
        if(!used[i]){
            vec.push_back({m,i});
            used [i]=true;
            ans =max (ans,calc());
            vec.pop_back();
            used[i] = false;
        }
    }
    used[m] =false;
    return ans;
}
int main(){
    cin >>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=i+1;j<=2*n;j++){
            cin >> value.at(i).at(j);
        }
    }
    cout << calc() << endl;
    return 0;
}