#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> vec(10);
    vector<int>p(10);
    for (int i =0;i<m;i++){
        int k;
        cin >>k;
        for(int j=0;j<k;j++){
            int s;
            cin >>s;
            s--;
            vec.at(i).push_back(s);
        }
    }
    for(int i=0; i<m; i++){
        cin >> p.at(i);
    }
    int ans =0;
    for(int i=0;i<(1 << n);i++){
        int mid =0;
        for(int j =0; j<m; j++){
            int cnt =0;
            for(int s:vec.at(j)){
                if(i & (1 << s)){
                    cnt ++;
                }
            }
            if (cnt % 2 == p.at(j)){
                mid ++;
            }
        }
        if (mid == m){
            ans ++;
        }
    }
    cout << ans << endl;
}