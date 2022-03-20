#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int64_t x;
    string S;
    cin >> n >> x >>S;
    int count =0;
    for(int i=0;i<n;i++){
        if(x<500000000000000002){
            if(S.at(i)=='U'){
                x/=2;
            }
            if(S.at(i)=='L'){
                x*=2;
            }
            if(S.at(i)=='R'){
                x*=2;
                x++;
            }
        }
        else{
            if(S.at(i)=='U' && count ==0){
                x/=2;
            }
            else if(S.at(i)=='U'){
                count --;
            }
            if(S.at(i)=='L'){
                count ++;
            }
            if(S.at(i)=='R'){
                count ++;
            }

        }
    }
    cout << x << endl;
}