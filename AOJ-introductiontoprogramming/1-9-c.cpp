#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int t=0, h=0;
    for (int i=0; i<n; i++){
        string a,b;
        cin >> a >> b;
        if (a>b){
            t+=3;
        }
        else if (b>a){
            h+=3;
        }
        else {
            t+=1;
            h+=1;
        }
    }
    cout << t <<" "<< h<< endl;
    return 0;
}