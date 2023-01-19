#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n,m,t;
    cin >> n >>m >>t;
    vector<int64_t> A(n);
    vector<int64_t> X(m+1);
    vector<int64_t> Y(m+1);
    for(int i=0;i<n-1;i++){
        cin >> A.at(i) ;
    }
    for(int i=0;i<m;i++){
        cin >> X.at(i)>>Y.at(i) ;
    }
    string ans ="No";
    int tempx =0;
    int i=0;
    while(t>A.at(i)){
        if(X.at(tempx)-2 == i){
            t+= Y.at(tempx);
            if(tempx < m-1) tempx++;
        }
        t -= A.at(i);
        i++;
        if (i==n-1){
            ans ="Yes";
            break;
        }
    }
    cout << ans << endl;
}
