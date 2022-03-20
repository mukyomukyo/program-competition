#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> vec[100100];
vector<int> color;
void dfs( int v, int cur =0){
    color[v] = cur;
    for(auto next_v:vec[v]){
        if(color[next_v.first] == -1){
            if(next_v.second %2 == 0){
                dfs(next_v.first,cur);
            }
            else{
                dfs(next_v.first,1-cur);
            }
        }
    }
} 
int main(){
    int n;
    cin >> n ;
    for(int i=0;i<n-1;i++){
        int a,b,c;
        cin >> a >> b >> c;
        a--;
        b--;
        vec[b].push_back({a,c});
        vec[a].push_back({b,c});
    }
    color.assign(n,-1);
    dfs(0);
    for(int i=0;i<n;i++){
        cout << color[i] << endl;
    }
}