#include<bits/stdc++.h>
using namespace std;
int H,W;
vector<vector<char>> vec(10,vector<char>(10));
void dfs(int h,int w){
    vec[h][w]='x';
    vector<vector<int>> wai(4,vector<int>(2));
    wai = {{0,-1},{0,1},{-1,0},{1,0}};
    for(int i=0;i<=3;i++){
            int nh = h + wai[i][0];
            int nw = w + wai[i][1];
            if(nh<0 || nh>=10 || nw<0 || nw>=10){
                continue;
            }
            if(vec[nh][nw]=='x'){
                continue;
            }
            dfs(nh,nw);
    }
}
int main(){
        for(int i=0;i<9;i++){
            string s;
            cin >>s;
            for(int j=0;j<9;j++){
                vec[i][j] =s.at(j);
            }
        }
        string ans ="No";
        int count =0;
        for(int e=0;e<10;e++){
            for(int f=0;f<10;f++){
                vec[e][f] ='o';
                for(int i=0;i<10;i++){
                    for(int j=0;j<10;j++){
                        if(vec[i][j]=='x'){
                        continue;
                        }
                        dfs(i,j);
                    count ++;
                    }
                }
                if (count ==1){
                    ans ="Yes";
                }
            }
        }
        cout << ans << endl;
}
