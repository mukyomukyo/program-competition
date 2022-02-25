#include<bits/stdc++.h>
using namespace std;
bool sosu(int a){
    int b = sqrt(a);
    bool ans = true;  
    for (int i=2; i<=b;i++){
        if ( a % i == 0){
            ans =false;
        }
    }
    return ans;
}
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for (int i = a; i<=b; i++){
        bool ans1 = false;
        for (int j = c; j<=d; j++){
            if(sosu(i+j)){
                ans1 =true;
            }
        }
        if (ans1 != true){
            cout << "Takahashi"<< endl;
            break;
        }
        if (ans1 ==true && i==b){
            cout << "Aoki" << endl;
        }

    }
}