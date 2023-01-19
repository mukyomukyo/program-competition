#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,r;
    cin >>n >>p >>q >>r;
    vector<int64_t>vec(n);
    for(int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    int x =0;
    int y =1;
    int z =2;
    int w =n;
    int ans =1;
    int64_t sumx,sumy,sumz =0;
    while(sumz !=r){
        while (sumy !=q)
        {
            while(sumx !=p ){
                if(sumx <p){
                    sumx +=vec.at(y-1);
                    y+=1;
                    if(y>=n-1) {
                        ans =0;
                        break;
                    }
                }
                else{
                    sumx -=vec.at(x);
                    x+=1;
                }
            }
            if (ans ==0) break;
            z=y+1;
            if(sumy <q){
                sumy +=vec.at(z-1);
                z+=1;
                if(z>=n-1) {
                    ans =0;
                    break;
                }
            }
            else{
                continue;
            }

        }
        if (ans ==0) break;
            w=z+1;
            if(sumz <r){
                sumz +=vec.at(w-1);
                w+=1;
                if(w>=n-1) {
                    ans =0;
                    break;
                }
            }
            else{
                continue;
            }
    }
}
