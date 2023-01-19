#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >>n >>k;
    vector<int> vec(n);
    for(int i =0;i<n;i++){
        cin >>vec.at(i) ;
    }
    vector<int64_t> b(n);
    int64_t ans=0;
    int64_t sum =0;
    int right =0;
    for (int left =0; left<n; ++left){
        while(right< n && sum < k){
            sum += vec[right];
            ++right;
        }
        if (sum <k){
            break;
        }
        int64_t temp = n-right+1;
        if (right ==left) {
            if(right <n-1){
                ++right;
            }
            else {
                ans += temp;
                break;
            }
        }
        else sum -=vec[left];
        ans += temp;

    }
    cout << ans << endl;

}
