#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string sen;
    while(cin >> sen){
        if (sen=="-"){
            break;
        }
        int m;
        cin >> m;
        for (int i=0; i<m ; i++){
            int h;
            cin >> h;
            string b = sen.substr(0, h);
            sen = sen + b;
            sen.erase(0,h);
        }
        if (sen !="-"){
            cout << sen << endl;
        }
    }
    
    return 0;
}