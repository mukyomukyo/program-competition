#include<bits/stdc++.h>
using namespace std;
int64_t L,R;
bool judge(int64_t a,int64_t b){
    int c = b %(b-a);
    if(c==1 ||b-a ==1){
        return true;
    }
    else if(c==0){
        return false;
    }
    else{
        judge(c,a);
    }
}
int main(){
    cin >> L >> R;
    
}