#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector <int>vec(n);
    vector<int>ans;
    for (int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    int answer =1;
    ans.push_back(vec.at(0));
    cout << answer << endl;
    for (int i =1; i<n;i++){
        auto a = ans.end();
        if (vec.at(i)==*a){
            ans.pop_back();
            answer --;
        }
        else{
            ans.push_back(*a);
            answer ++;
        }
        cout << answer << endl;
    } 
}