#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,n;
    cin >>x >> y >>n;
    int value = min(n/3 *y +n%3 *x,n*x);
    cout << value << endl;
}
