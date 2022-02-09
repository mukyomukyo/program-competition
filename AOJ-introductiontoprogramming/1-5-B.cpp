#include <bits/stdc++.h>
using namespace std;
int main(){
    while(true){
    int a,b;
    cin >> a>> b;
    if (a==0 && b==0){
        break;
    }
    for (int i=0; i<b; i++){
        cout << "#";
    }
    cout <<endl;
    for (int j=0; j<a-2; j++){
        cout <<"#";
        for (int k=0; k<b-2; k++){
        cout <<".";
        } 
        cout <<"#"<< endl;
    }
    for (int i=0; i<b; i++){
        cout << "#";
    }    
    cout << endl;
    cout << endl;
    }

    return 0;
}
