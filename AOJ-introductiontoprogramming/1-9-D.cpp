#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str;
    cin >> str;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string com;
        cin >> com;
        if (com =="print" ){
            int a,b;
            cin >> a >>b;
            string c =str.substr(a,b-a+1);
            cout << c << endl;
        }
        if (com =="replace"){
            int a,b;
            cin >> a >>b;
            string c;
            cin >>c;
            str.replace(a,b-a+1,c);
        }
        if (com == "reverse"){
            int a,b;
            cin >> a >>b;
            string c= str.substr(a,b-a+1);
            reverse(c.begin(),c.end());
            str.replace(a,b-a+1,c);
        }
    }
    return 0;
}