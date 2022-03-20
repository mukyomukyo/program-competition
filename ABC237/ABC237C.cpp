#include<bits/stdc++.h>
using namespace std;
bool judge(string s, int c){
    
    int n=s.size();
    for(int i=0;i<n-c;i++){
        if (!(s.at(i) == s.at(n-1-i-c))){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    string ans = "Yes";
    int x=0,y=0;
    int n= s.size();
    for(int i=0;i<n;i++){
        if (s.at(i) =='a'){
           x++;
        }
        else{
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if (s.at(i) =='a'){
           y++;
        }
        else{
            break;
        }
    }
    int c =y-x;
    if (x==n){
        cout << ans << endl;
        return 0;
    }
    if (c < 0){
        ans ="No";
    }
    else{
        for(int i=x;i<n-y;i++){
            if (!(s.at(i) == s.at(n-1-i-y+x))){
                ans ="No";
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}