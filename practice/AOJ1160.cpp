#include<bits/stdc++.h>
using namespace std;
int H,W;
vector<vector<int>> vec;
void dfs(int h,int w){
    vec[h][w]=0;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            int nh = h + i;
            int nw = w + j;
            if(nh<0 || nh>=H || nw<0 || nw>=W){
                continue;
            } 
            if(vec[nh][nw]==0){
                continue;
            }
            dfs(nh,nw);
        }
    }
} 
int main(){
    while( cin >> W >> H){
        if(H ==0 || W==0){
            break;
        }
        vec.assign(H,vector<int>(W,0));
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                cin >> vec[i][j] ;
            }
        }
        int count =0;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(vec[i][j]==0){
                    continue;
                }
                dfs(i,j);
                count ++;
            }
        }
        cout << count << endl;
    }
}