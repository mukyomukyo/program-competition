#include <bits/stdc++.h>
using namespace std;
int main(){
    for (int i=0 ; i<3000; i++){
        vector <int> vec(2);
        for (int j=0; j<2; j++){
            cin >> vec.at(j);
        }
        if (vec.at(0)==0 && vec.at(1)==0){
            break;
        }
        sort(vec.begin(), vec.end());
        cout << vec.at(0) << " "<< vec.at(1) << endl;
    }
}