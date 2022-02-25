#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >>n >> m;
    vector<vector<int>>vec(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a>>b;
        vec.at(a-1).push_back(b-1);
        vec.at(b-1).push_back(a-1);
    }
    vector<int>order(n-1);
    for(int i=0; i<n-1;i++){
        order.at(i)=i+1;
    }
    int ans =0;
    do{
        bool b =true;
        int now =0;
        for(int i=0;i<n-1;i++){
            if(!(count(vec.at(now).begin(),vec.at(now).end(),order.at(i)))){
                b= false;
                break;
            }
            now =order.at(i);
        }
        if(b){
            ans ++;
        }
    } while (next_permutation(order.begin(),order.end()));
    cout << ans << endl;
}