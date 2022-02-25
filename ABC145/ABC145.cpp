#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    vector<vector<double>>vec(n,vector<double>(2));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin >> vec.at(i).at(j) ;
        }
    }
    vector<double>wai(n);
    for(int i=0;i<n;i++){
        wai.at(i) = i;
    }
    double ans=0;
    do{
        for(int i=1; i<n; i++){
            double dist= sqrt((vec.at(wai.at(i-1)).at(0)-vec.at(wai.at(i)).at(0))*(vec.at(wai.at(i-1)).at(0)-vec.at(wai.at(i)).at(0))+(vec.at(wai.at(i-1)).at(1)-vec.at(wai.at(i)).at(1))*(vec.at(wai.at(i-1)).at(1)-vec.at(wai.at(i)).at(1)));
            ans +=dist;
        }
        
    } while (next_permutation(wai.begin(),wai.end()));
    double a =1;
    for(int i=1;i <=n;i++ ){
        a*=double(i);
    }
    ans/=a;
    cout << fixed << setprecision(7);
    cout << ans << endl;
    
}