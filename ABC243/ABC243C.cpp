#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> x(200010);
    vector<int> y(200010);
    vector<tuple<int,int,char>> vec(n); 
    for(int i=0;i<n;i++){
        int xi,yi;
        cin >> xi >>yi;
        x.at(i) = xi;
        y.at(i) = yi;
    }
    string S;
    cin >> S;
    for(int i=0;i<n;i++){
        vec.at(i) = {y.at(i), x.at(i), S.at(i)};
    }
    sort(vec.begin(),vec.end());
    bool ans =false;
    for(int i=0;i<n-1;){
        vector<tuple<int,char>> temp;
        if(get<0>(vec[i]) != get<0>(vec[i+1])){
            i++;
        }
        while(get<0>(vec[i]) == get<0>(vec[i+1])){
            temp.push_back(make_tuple(get<1>(vec.at(i)),get<2>(vec.at(i))));
            i++;
        }
        sort(temp.begin(),temp.end());
        bool ans1 = false;
        for(auto p: temp){
            if(get<1>(p)=='R'){
                ans1 =true;
            }
            if(get<1>(p)=='L' && ans1 == true){
                ans =true;
            }
        }
    }
    if(ans){
        cout << "Yes" << endl;
    } 
    else{
        cout << "No" << endl;
    }
}