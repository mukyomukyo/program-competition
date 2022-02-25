#include<bits/stdc++.h>
using namespace std;
int yaku(int n){ 
    int num =0;
    for (int i=1;i < sqrt(n);i++){
        if (n %i ==0){
            num ++;
        }
    }
    return 2*num;
}
int main(){
    int n;
    cin >>n;
    int ans=0;
    for (int i=1; i<=n ;i+=2){
        if (yaku(i)==8){
            ans ++;
        }
    }
    cout << ans << endl;
}