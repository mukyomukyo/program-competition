#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<pair<int64_t,int64_t>> a;
    int n;
    cin >>n;
    int64_t temp =0;
    int yy;
    cin >>yy;
    if(yy==1){
        int64_t x,c;
        cin >> x >>c;
        a.push(make_pair(x,c));
        temp =c;
    }
    for(int i=1;i<n;i++){
        int y;
        cin >>y;
        if(y==1){
            int64_t x,c;
            cin >> x >>c;
            a.push(make_pair(x,c));
        }
        if(y==2){
            int64_t c;
            cin >>c;
            int64_t answer=0;
            while(c>0){
                if(c>=temp){
                    c -= temp;
                    answer += a.front().first *temp;
                    a.pop();
                    if(temp)temp =a.front().second;
                }
                else{
                    temp -= c;
                    answer += c * a.front().first;
                    break;
                }
            }
            cout << answer << endl;
        }
    }
}