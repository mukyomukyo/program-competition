#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    double x[n];
    double y[n];
    for(int i=0;i<n;i++){
        cin >>x[i] >> y[i] ;
    }
    double ans =0;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            ans =max(ans,sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])));
        }
    }
    cout << setprecision(11);
    cout << ans << endl;

}