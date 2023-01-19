#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >>n >>k;
    vector <vector<bool>> vec(n,vector<bool>(2,false));
    vec[0][1] = 1;
    vec[0][0] = 1;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i); 
    }
    for(int i=0;i<n;i++){
        cin >> b.at(i); 
    }
    for(int i=1;i<n;i++){
        if( (vec[i-1][0]==1 && abs(a[i]-a[i-1])<=k) || (vec[i-1][1]==1 && abs(a[i]-b[i-1])<=k)){
            vec[i][0] =true;
        }
        if((vec[i-1][0]==1 && abs(b[i]-a[i-1])<=k) || (vec[i-1][1]==1 && abs(b[i]-b[i-1])<=k)){
            vec[i][1] = true;
        }
    }
    if(vec[n-1][0] ||vec[n-1][1]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}