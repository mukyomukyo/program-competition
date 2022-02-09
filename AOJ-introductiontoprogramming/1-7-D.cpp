#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l;
    cin >> n>> m >> l ;
    vector<vector<int64_t>>A(n,vector<int64_t>(m));
    vector<vector<int64_t>>B(m,vector<int64_t>(l));
    vector<vector<int64_t>>C(n,vector<int64_t>(l));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> A.at(i).at(j) ;
        }
    }
    for (int i=0; i<m; i++){
        for (int j=0; j<l; j++){
            cin >> B.at(i).at(j) ;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<l; j++){
            for (int k=0; k<m; k++){
                C.at(i).at(j)+= A.at(i).at(k)*B.at(k).at(j);
            }
        }
    }
     for (int j=0;j<n;j++){
        for (int i=0; i<l; i++){
            cout << C.at(j).at(i);
            if (i<l-1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}