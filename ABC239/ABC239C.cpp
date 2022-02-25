#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2 ;
    string ans ="No";
    for (int i=-2;i<3;i++){
        for (int j=-2; j<3; j++){
            if (i*i +j*j != 5){
                continue;
            }
            if (( x1 + i - x2)*( x1 + i - x2 ) + ( y1 + j - y2)*( y1 + j - y2) == 5){
                ans ="Yes";
            }
        }
    }
    cout << ans << endl;
}