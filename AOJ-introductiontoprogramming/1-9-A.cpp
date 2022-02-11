#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin >> a;
    int count=0;
    while(cin >> b){
        if (b=="END_OF_TEXT"){
            break;
        }
        for (int i=0; i<b.size();i++){
            if( isupper( b.at(i) ) ){
                b.at(i)= tolower(b.at(i)); 
            }
        }
        if (b==a){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}