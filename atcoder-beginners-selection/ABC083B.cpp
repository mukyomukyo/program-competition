#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    int sum=0;
    cin >> n >> a >> b ;
    for (int h=0;h<=9;h++){
        for (int i=0; i<=9; i++){
            for (int j=0; j<=9 ;j++){
                for (int k=0; k<=9; k++){
                    int ans= h*1000 + i*100 + j*10 + k;
                    if ( h + i + j + k <=b && h + i + j + k >=a && ans <=n){
                        sum += ans;
                    }
                }
            }
        }
    }
    if (n==10000 && a==1){
        sum += 10000;
    }
    cout << sum << endl;
}