#include <bits/stdc++.h>
using namespace std;
int main(){
    for (int i=0;i<10000;i++){
        int a,b;
        string OP;
        cin >>a >> OP >>b;
        if (OP=="?"){
            break;
        }
        if (OP=="+"){
            cout << a+b<< endl;
        }
        if (OP=="-"){
            cout << a-b << endl;
        }
        if (OP=="*"){
            cout << a*b << endl;
        }
        if (OP=="/"){
            cout << a/b << endl;
        }
    }
    return 0;
}