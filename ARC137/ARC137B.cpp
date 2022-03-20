#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    int con0=0,con1=0;
    int temp0 =0,temp1=0;
    int ans0=0,ans1=0;
    if (vec.at(0)==0){
        con0 =1;
        temp0=1;
    }
    else{
        con1 =1;
        temp1=1;
    }
    for(int i=1;i<n;i++){
        if(vec.at(i-1)==0 && vec.at(i)==0){
            con0++;
            temp0++;
            temp1--;
            if(temp1<0){
                temp1 = 0;
            }
        }
        else if (vec.at(i-1)==0){
            con1++;
            ans0 = max(max(con0,ans0),temp0);
            temp0--;
            temp1++;
            con0 =0;
        }
        else if (vec.at(i-1)==1 && vec.at(i)==1){
            con1++;
            temp1++;
            temp0--;
            if(temp0<0){
                temp0 = 0;
            }
        }
        else if (vec.at(i-1)==1){
            con0++;
            ans1 = max(max(con1,ans1),temp1);
            temp1--;
            temp0++;
            con1 =0;
        }
    }
    cout << max(max(ans0,con0),temp0) + max(max(ans1,con1),temp1) + 1 << endl;
}