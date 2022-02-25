#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    vector<int64_t>vec;
    for (int i=0; i<= 2* max(x,y); i+=2){
        int64_t value;
        if (x-i/2 <0){
            value = (y-i/2) * b + c * i;
        }
        else if (y-i/2 <0){
            value = (x-i/2) * a + c * i;
        }
        else {
            value = (x-i/2) * a + (y-i/2)* b + c * i;
        }
        vec.push_back(value);
    }
    sort(vec.begin(), vec.end());
    cout << vec.at(0) << endl;
}