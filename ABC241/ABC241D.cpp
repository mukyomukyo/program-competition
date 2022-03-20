#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >>q;
    multiset<int64_t> s;
    for(int i=0;i<q;i++){
        int a;
        int64_t x;
        cin >>a >>x;
        if(a==1){
            s.insert(x);
        }
        if (a==2){
            int k;
            cin >>k;
            auto itr1 =s.upper_bound(x);
            while (k && itr1 != s.begin()) {
				k--, itr1--;
			}
            if(k>=1){
                cout << -1 << endl;
            }
            else{
                cout << *itr1 << endl;
            }
        }
        if(a==3){
            int k;
            cin >> k;
            k--;
            auto itr1 =s.lower_bound(x);
            while (k && itr1 != s.end()) {
				k--, itr1++;
			}
            if(itr1 == s.end()){
                cout << -1 << endl;
            }
            else{
                cout << *itr1 << endl;
            }
        }
    }
}
