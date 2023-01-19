#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> vec;
    int tempsize = 0;
    for(int i=1;i<=n;i++){
        vec.push_back(i);
        for(int i=0;i<=tempsize-1;i++){
            vec.push_back(vec.at(i));
        }
        tempsize=vec.size();
    }
    for(int i=0;i<tempsize;i++){
        cout << vec.at(i) << " " ;
    }
    cout << endl;

}