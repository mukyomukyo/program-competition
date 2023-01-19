#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int main(){
    int n,m; cin >> n>>m;
    Graph G(n+1);
    for (int i= 1;i<=m;i++){
        int u,v; cin >> u >> v ;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int count=0;
    for (int i= 1;i<=n;i++){
        for (int j= i;j<=n;j++){
            for (int k= j;k<=n;k++){
                if (find(G[i].begin(), G[i].end(), j)!= G[i].end()){
                    if (find(G[j].begin(), G[j].end(), k)!= G[j].end()){
                        if (find(G[k].begin(), G[k].end(), i)!= G[k].end()){
                            count ++;
                                }
                            }
                        }
                    }
                }
            }
    cout << count << endl;
    }
