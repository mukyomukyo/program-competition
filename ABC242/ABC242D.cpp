#include<bits/stdc++.h>
using namespace std;
char change(char p,int i){
    if(p=='A'&& i == 0){
        return 'C';
    }
    else if(p=='A'&& i == 1){
        return 'B';
    }
    else if(p=='B'&& i == 0){
        return 'A';
    }
    else if(p=='B'&& i == 1){
        return 'C';
    }
    else if(p=='C'&& i == 0){
        return 'B';
    }
    if(p=='C'&& i == 1){
        return 'A';
    }
    else{
        return 'z';
        }
}
int main(){
    string s;
    cin >> s;
    int q;
    cin >>q;
    for(int i=0;i <q; i++){
        int64_t t,k;
        string copy = s;
        cin >> t >>k;
        if(t>60){
            int64_t copyk =k;
            vector<int>vec(80);
            int kusa =0;
            while(copyk > 0){
                kusa++;
                copyk/=2;
            }
            for(int j=1;j < 70;j++){
                vec.at(j) = k%2;
                k/=2;
            }
            char ans ;
            if(t-kusa %3 == 0){
                ans = copy.at(0);
            }
            if(t-kusa %3 == 1){
                ans = change(copy.at(0),1);
            }
            if(t-kusa %3 == 2){
                ans = change(copy.at(0),1);
                ans = change(ans,1);
            }
            for(int j=kusa-1;j>=1;j--){
                change(ans,vec.at(j));
            }
            cout << ans << endl;
        }
        else{
            int64_t copyk =k;
            int64_t copyk2 =k-1;
            int64_t copyt =t;
            vector<int>vec(80);
            int kusa =0;
            while(copyk > 0){
                kusa++;
                copyk/=2;
            }
            for(int j=1;j < 70;j++){
                vec.at(j) = k%2;
                k/=2;
            }
            char ans ;
            for(int j=0; j<t; j++){
                copyk2 /= 2;
            }
            if(copyk2 >= 1){
                ans = s.at(copyk2);
            }
            else{
                if(t-kusa %3 == 1){
                    ans = change(copy.at(0),1);
                }
                if(t-kusa %3 == 2){
                    ans = change(copy.at(0),1);
                    ans = change(ans,1);
                }
                if(t-kusa %3 == 0){
                    ans = copy.at(0);
                }
            }
            for(int j=kusa-1;j>=1;j--){
                change(ans,vec.at(j));
            }
            cout << ans << endl;
        }
    }
}