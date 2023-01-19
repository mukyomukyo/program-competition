#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    sort(vec.begin(),vec.end());
    int ai = vec.at(n-1);
    int aj =1000000000;
    int temp = aj;
    for(int i=0;i<n-1;i++){
        if(temp >= abs((ai+1)/2 -vec.at(i))){
            aj =vec.at(i);
            temp = abs((ai+1)/2 - vec.at(i));
        }
    }
    cout << ai << " "<< aj << endl;

}