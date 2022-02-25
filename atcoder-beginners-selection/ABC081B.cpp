#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int>vec(n);
    for (int i= 0 ;i<n ;i++){
        int an;
        cin >> an;
        int b = 0;
        while(an%2 ==0){
            b++;
            an/=2;
        }
        vec.at(i)=b;
    }
    sort(vec.begin(), vec.end());
    cout << vec.at(0) << endl;
}