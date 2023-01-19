#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1,w1;
    cin >>h1 >>w1;
    vector<vector<int>> A (h1,vector<int>(w1));
    for(int i=0;i<h1 ;i++){
        for(int j=0;j<w1 ;j++){
            cin >>A.at(i).at(j);
        }
    }
    int h2,w2;
    cin >>h2 >>w2;
    vector<vector<int>> B (h2,vector<int>(w2));
    for(int i=0;i<h2 ;i++){
        for(int j=0;j<w2 ;j++){
            cin >>B.at(i).at(j);
        }
    }
    int del1 =0;
    int del2 =0;
    int tempw1 =0;
    int temph1 =0;
    int i =0;
    int j =0;
    string ans ="Yes";
        while(j<w2 && i<h2){
            if(B.at(i).at(j)==A.at(temph1).at(tempw1)){
                tempw1++;
                j++;
                if (j =w2){
                    i++;
                    j=0;
                    del1 =0;
                    del2 =0;
                    tempw1 =0;
                    temph1 =0;
                    temph1 =0;
                }
            }
            else{
                tempw1++;
                del1 ++;
            }
            if (del1> w1-w2){
                ans ="No";
                break;
            }
        }
        cout << ans << endl;
}
