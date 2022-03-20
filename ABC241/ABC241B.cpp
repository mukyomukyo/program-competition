#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> an(n);
    for(int i=0;i<n;i++){
        cin >> an[i];
    }
    vector <int> bn(m);
    for(int i=0;i<m;i++){
        cin >> bn[i];
    }
    sort(an.begin(),an.end());
    sort(bn.begin(),bn.end());
    string ans ="Yes";
    int j=0;
    for(int i=0;i<m;){
            if(j>n){
                ans ="No";
                break;
            }
            if(bn[i] != an[j]){
                j++;
                if (j>=n){
                    ans = "No";
                    break;
                }
            }
            else{
                i++;
                j++;
            }
        }
        cout << ans << endl;
    }