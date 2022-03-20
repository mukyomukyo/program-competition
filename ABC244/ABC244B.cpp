#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mood = 0;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s.at(i) =='S'){
            if(mood ==0){
                x++;
            }
            if(mood ==1){
                y--;
            }
            if(mood ==2){
                x--;
            }
            if(mood ==3){
                y++;
            }
        }
        else{
            mood++;
            if(mood == 4){
                mood =0;
            }
        }
    }
    cout << x <<" " << y << endl;
}