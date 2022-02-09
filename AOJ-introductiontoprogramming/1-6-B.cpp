#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <vector<bool>> data(4,vector<bool>(13));
    for (int i=0; i<n ;i++){
        char a;
        int b;
        cin >> a >> b;
        if (a=='S'){
            data.at(0).at(b-1) = true;
        }
        if (a=='H'){
            data.at(1).at(b-1) = true;
        }
        if (a=='C'){
            data.at(2).at(b-1) =true;
        }
        if (a=='D'){
            data.at(3).at(b-1) = true;
        }
    }
    vector<char>vec;
    vec = {'S', 'H', 'C', 'D'};
    
    for (int j=0 ;j<4; j++){
        for (int k=0; k<13; k++){
            if (data.at(j).at(k)== false){
                cout << vec.at(j) << " " << k+1 << endl;
            }
        }
    }
}