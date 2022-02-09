#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int>>data(r+1,vector<int>(c+1));
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> data.at(i).at(j) ;
            data.at(i).at(c)+= data.at(i).at(j);
        }
    }
    for (int j=0;j<c+1;j++){
        for (int i=0; i<r; i++){
            data.at(r).at(j)+=data.at(i).at(j);
        }
    }
    for (int j=0;j<r+1;j++){
        for (int i=0; i<c+1; i++){
            cout << data.at(j).at(i);
            if (i<c){
                cout << " ";
            }
        }
        cout << endl;        
    }
}