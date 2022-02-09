#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec(26);
    while (true){
        char s;
        cin >>s;
        if (s='.'){
            break;
        }
        int num = s - 'a';
        int num2 =s - 'A';
        if (num>=0 && num<=25){
            vec.at(num) += 1;
        }
        else if(num2>=0 && num2<=25){
            vec.at(num2) += 1;
        }
    }
    for(int i=0; i<26; i++){
        printf("%c : %d\n", 97+i,vec.at(i));
    }
}