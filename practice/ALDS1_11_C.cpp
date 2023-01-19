#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int main(){
    int n; cin >> n;
    Graph G(n+1);
    for (int i= 0;i<n;i++){
        int u,k; cin >> u >> k ;
        for (int j =0;j<k ;j++){
            int v; cin >>v;
            G[u].push_back(v);
        }
    }
    vector<int> dist(n+1,-1);
    queue<int> que;
    dist [1] =0;
    que.push(1);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv: G[v]){
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    for(int i=1;i<=n;i++){
        cout << i <<" "<< dist[i] <<endl;
    }
}
