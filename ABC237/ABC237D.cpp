#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >>s;
    list <int> ans;
    ans.push_back(n);
    for(int i=n-1;i>=0 ;i--){
        if(s.at(i)=='L'){
            ans.push_back(i);
        }
        else{
            ans.push_front(i);
        }
    }
    for_each(ans.cbegin(), ans.cend(), [](int x){
    std::cout << x << " ";
    });
    cout << endl;

}