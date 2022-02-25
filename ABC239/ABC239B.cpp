#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t x;
    cin >> x;
    if (x < 0 && x%10 != 0){
        x -=10;
    }
    int64_t ans =x/10;
    cout << ans << endl;
}