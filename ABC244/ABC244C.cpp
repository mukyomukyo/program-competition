#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> vec(2*n+1);
    cout << 1 << endl;
    vec.at(0) == 1;
    for(int i =0;i<=n;i++){
        int m;
        cin >>m;
        if(m==0){
            break;
        }
        else{
            vec.at(m-1) = 1;
            for(int j=1;j<2*n+1;j++){
                if(vec.at(j)==0){
                    cout << j+1 << endl;
                    vec.at(j) = 1;
                    break;
                }
            }
        }
    }    
}