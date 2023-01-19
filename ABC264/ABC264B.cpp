#include<bits/stdc++.h>
using namespace std;
int main(){
    int R,C;
    cin >> R >>C;
    int a = abs(8-R);
    int b = abs(8-C);
    int c ;
    if (a>=b){
        c =a;
    }
    else{
        c=b;
    }
    if (c%2==0){
        cout << "white" << endl;
    }
    else{
        cout << "black" << endl;
    }
}
