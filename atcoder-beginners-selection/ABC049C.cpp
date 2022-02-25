#include<bits/stdc++.h>
using namespace std;
int main(){
    string word[4] ={"dream", "dreamer", "erase", "eraser"};
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    for (int i=0;i<4;i++){
        reverse(word[i].begin(),word[i].end());
    }
    bool ans =true;
    for (int i=0;i<S.size();){
        bool ans2 = false;
        for (int j=0;j<4;j++){
            if(S.substr(i,word[j].size())==word[j]){
                ans2 = true;
                i += word[j].size();
            }
        }
        if (!ans2){
            ans = false;
            break;
        }
    }
    if (ans){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}