#include<bits/stdc++.h>
using namespace std;
string s;
char change(char p,int64_t k ){
    return 'A' + (p-'A'+k)%3;
}
char f(int64_t t,int64_t k){
    if(t==0){
            return s.at(k);
        }
        else if(k==0){
            return change(s.at(0),t);
        }
        else{
            return change(f(t-1,k/2),k%2 +1);
        }
}
int main(){

    int q;
    cin >> s >> q;
    for(int i =0; i<q; i++){
        int64_t t,k;
        cin >> t >> k;
        cout << f(t,k-1) << endl;
        
    }
    
}