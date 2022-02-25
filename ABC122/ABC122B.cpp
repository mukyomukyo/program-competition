#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans = 0;
    for (size_t i=0; i<s.length(); i++){
        if (s.at(i)=='A'||s.at(i)=='C'||s.at(i)=='G'||s.at(i)=='T'){
            int ans2 =1;
            if (i !=s.length()-1){
               int j= i+1;
                while(s.at(j)=='C'||s.at(j)=='A'||s.at(j)=='G'||s.at(j)=='T'){
                    ans2 ++;
                    if (j==s.length()-1){
                        break;
                    }                    
                    j++;

                } 
            }
            if (ans2 > ans){
                ans = ans2;
            }
        }
    }
    cout << ans << endl;
}