#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    while(true){
        double s;
        cin >> s;
        if (s==0){
            break;
        }
        vector<double>vec(s);
        for (int i=0; i<s; i++){
            cin >> vec.at(i) ;
        }
        double sum =0;
        for (int i=0; i<s;i++){
            sum += vec.at(i);
        }
        double ave = sum / s;
        double ans = 0;
        for (int i=0; i<s;i++){
            ans += (vec.at(i)-ave)*(vec.at(i)-ave);
        }
        ans =sqrt(ans/s);
        cout << fixed << setprecision(5);
        cout << ans << endl;
    }
}