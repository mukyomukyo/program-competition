#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,Y;
    cin >> N >> Y;
    string ans ="No";
    int a,b,c=0;
    for (int i=0; i<=N;i++){
        for (int j=0; j<= N-i;j++){
            int yen=0;
            yen += 5000 * i;
            yen += 10000 * j;
            yen += 1000 * (N-j-i);
            if (yen == Y){
                b = i;
                a = j;
                c = N-i-j;
                ans ="Yes";
            }
        }
    }
    if (ans=="Yes"){
        cout << a << " " << b <<" " << c << endl;
    }
    else{
        cout << -1 << " " << -1 << " " << -1 << endl;
    }
    
}