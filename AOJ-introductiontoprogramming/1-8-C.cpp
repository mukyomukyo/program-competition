#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    vector<int> vec(26);
    char s;
    while ( cin >> s){
        if (s =='.'){
            break;
        }
        if (s>='a' && s<='z'){
            vec.at(s-'a') ++;
        }
        else if(s>='A' && s<='Z'){
            vec.at(s-'A') ++;
        }
    }
    for(int i=0; i<26; i++){
        printf("%c : %d\n", 'a'+i, vec.at(i));
    }
}