#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1);
    vector<int> c(n+m+1);
    for(int i=0;i<n+1;i++){
        cin >> a[i];
    }
    for(int i=0;i<n+m+1;i++){
        cin >> c[i];
    }
    vector<int> b(m+1);
    int k=0;
    for(int i=0;i<m+1;i++){
        while(a[k]==0){
            k++;
        }
        b[i]= c[i+k]/a[k];
        for(int j=0;j<n+1;j++){
            c[i+j] -=b[i]*a[j];
        }
        cout << b[i] <<" " ;
    }
    cout << endl;
}