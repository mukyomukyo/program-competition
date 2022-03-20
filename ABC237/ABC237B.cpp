#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> vec(h,vector<int>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> vec.at(i).at(j) ;
        }
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            cout << vec.at(j).at(i) << " ";
        }
        cout << endl;
    }
}