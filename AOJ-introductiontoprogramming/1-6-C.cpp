#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <vector<vector<int>>> data(4,vector<vector<int>>(3,vector<int>(10)));
    int a;
    cin >> a;
    for (int i=0; i<a; i++){
        int b,f,r,v;
        cin >> b >> f >> r >> v;
        data.at(b-1).at(f-1).at(r-1)+=v;
    }
    for (int j=0; j<4; j++){
        for (int k=0;k<3;k++){
            for (int l=0; l<10; l++){
                cout <<" "<< data.at(j).at(k).at(l);
            }
            cout << endl;
        }
        if (j<3){      
            cout << "####################" << endl;
            }
    }
    return 0;

}