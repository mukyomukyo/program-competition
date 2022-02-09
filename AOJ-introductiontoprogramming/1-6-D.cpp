#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >>n >>m;
    vector<vector<int>>A(n,vector<int>(m));
    vector<int>B(m);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> A.at(i).at(j) ;
        }
    }
    for (int k=0; k<m; k++){
        cin >> B.at(k) ;
    }
    vector<int>ans(n);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            ans.at(i)+= A.at(i).at(j) * B.at(j);
        }
    }
    for(int i=0; i<n; i++){
        cout << ans.at(i) <<endl;
    }
    return 0;
}