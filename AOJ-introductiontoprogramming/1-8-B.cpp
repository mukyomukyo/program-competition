#include <bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        string n;
        cin >> n;
        if (n == "0"){
            break;
        }
        int count =0;
        for (int i=0;i<n.size();i++){
            int a = n.at(i) -'0';
            count +=a;
        }
        cout << count << endl;
    }
}