#include <bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n,x,count;
        cin >> n>>x;
        count = 0;
        if (n==0 && x== 0){
            break;
        }
        for (int i=1; i<=n-2; i++){
            if ( (x-i) %2 ==1){
                int part =max (min(-i+(x-i)/2, n-(x-i)/2),0);
                count +=part;
            }
            else{
                int part =max (min(-i-1+(x-i)/2, n-(x-i)/2),0);
                count +=part;
            }
        }
        cout << count << endl;
    }
}