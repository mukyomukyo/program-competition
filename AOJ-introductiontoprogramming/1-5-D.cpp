#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        if (i%3==0){
            cout << " "<< i ;
        }
        else{
            int m = i;
            while (m>0){
                if(m%10 == 3){
                    cout << " " << i ;
                    break;
                }
                m/=10;
            }
        }
    }
    cout << endl;
}