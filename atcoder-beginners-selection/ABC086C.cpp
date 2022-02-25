#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>t(n+1);
    vector<int>x(n+1);
    vector<int>y(n+1);
    for (int i=0;i<n;i++){
        cin >> t.at(i+1) >> x.at(i+1) >> y.at(i+1) ;
    }
    string ans ="Yes";
    for (int i=0;i<n;i++){
        int xabs = abs(x.at(i+1)-x.at(i));
        int yabs = abs(y.at(i+1)-y.at(i));
        int tabs = abs(t.at(i+1)-t.at(i));
        if ( tabs < xabs + yabs ){
            ans ="No";
            break;
        }
        if ((xabs + yabs)%2 != tabs%2 ){
            ans ="No";
            break;
        }
    }
    cout << ans << endl;
}