#include<bits/stdc++.h>
using namespace std;
int main(){
    int H, W;
    cin >>H >>W;
    vector<vector<char>> vec(H,vector<char>(W));
    vector<vector<char>> path(H,vector<char>(W));
    for (int i=0;i<H;i++){
        for (int j=0;j<W;j++){
            cin >> vec.at(i).at(j);
            path.at(i).at(j) =0;
        }
    }
    int x,y = 0;
    while(path.at(x).at(y) !=1){
        if(vec.at(x).at(y) =='U' && x!=0){
            path.at(x).at(y) =1;
            x -=1;
        }
        else if(vec.at(x).at(y) =='D' && x!=H-1){
            path.at(x).at(y) =1;
            x +=1;
        }
        else if(vec.at(x).at(y) =='L' && y!=0){
            path.at(x).at(y) =1;
            y -=1;
        }
        else if(vec.at(x).at(y) =='R' && y!=W-1){
            path.at(x).at(y) =1;
            y +=1;
        }
        else{
            cout << x+1 << " " << y+1 <<endl;
            break;
        }
    }
    if(path.at(x).at(y) ==1){
        cout << -1 << endl;
    }
}
