#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int answer =0;
    for (int h=0; h<a+1 ; h++){
        if (500*h > x){
            break;
        }
        for (int i=0; i<b+1 ; i++){
            if (500*h + 100*i > x){
                break;
            }
            for (int j= 0; j<c+1; j++){
                int sum = 0;
                sum += 500*h;
                sum += 100*i;
                sum += 50*j;
                if (sum ==x){
                    answer++;
                    break;
                }
            }
        }
    }
    cout << answer << endl;
}