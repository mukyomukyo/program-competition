#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    int start = 0;
    int end = n-1;
    while(true){
        while(vec.at(end)==0 && end >= start){
            end--;
        }
        if(vec.at(start)==1){
            cout << "No" << endl;
            break;
        }
        else if(end == start){
            cout << "Yes" << endl;
            break;
        }
        else{
            start++;
            for(int i=start;i<=end;i++){
                if(vec.at(i) ==0){
                    vec.at(i) =1;
                }
                else{
                    vec.at(i) =0;
                }
            }
        }
    }
}