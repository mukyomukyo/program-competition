#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> vec(300);
bool kaburi(int m,int i){
    int l=0;
    int k=m;
    while(k>0){
        k /= 10;
        l++;
    }
    if(i>l){
        
        if(count(vec.at(i-l).begin(),vec.at(i-l).end(),m)){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
int narabegyaku(int n){
    int k = n;
    int m = 1;
    while(k>10){
        k /= 10;
        m++;
    }
    int l=k;
    while(m>1){
        l *= 10;     
        m--;
    }
    int ans =(n-l)*10 +k;
    return ans;
}
int main(){
    int a,n;
    cin >> a >>n;
    bool answer =false;
    vec.at(0).push_back(n);
    for(int i=0;i<250;i++){
        for(auto p:vec.at(i)){
            if(p<=10 && p%a ==0){
                vec.at(i+1).push_back(p/a);
            }
            else if(p%a ==0){
                vec.at(i+1).push_back(p/a);
                vec.at(i+1).push_back(narabegyaku(p));
                if(kaburi(p,i)){
                    vec.at(i+1).pop_back();
                }
            }
            else if(p>10){
                vec.at(i+1).push_back(narabegyaku(p));
                if(kaburi(p,i)){
                    vec.at(i+1).pop_back();
                }
            }
        }
        if(count(vec.at(i+1).begin(),vec.at(i+1).end(),1)){
            cout << i+1 << endl;
            answer =true;
            break;
        }
    }
    if(!answer){
        cout << -1 << endl;
    }
}