#include<iostream>
#include<string>
using namespace std;
struct Dice{
    int a[6];
    void roll(char c){
        if (c=='N'){
            int b= a[0];
            a[0] = a[1];
            a[1] = a[5];
            a[5] = a[4];
            a[4] = b;
        }
        if (c=='S'){
            int b= a[0];
            a[0] = a[4];
            a[4] = a[5];
            a[5] = a[1];
            a[1] = b;
        }
        if (c=='W'){
            int b= a[0];
            a[0] = a[2];
            a[2] = a[5];
            a[5] = a[3];
            a[3] = b;
        }
        if (c=='E'){
            int b= a[0];
            a[0] = a[3];
            a[3] = a[5];
            a[5] = a[2];
            a[2] = b;
        }
        if (c=='A'){
            int b = a[1];
            a[1] = a[2];
            a[2] = a[4];
            a[4] = a[3];
            a[3] = b;
        }
    }
    void makenum(int c, int d){
        if (c==a[0] || c==a[1]|| c==a[4]|| c==a[5]){
            while(true){
                if (c==a[0]){
                    break;
                }
                else{
                    roll('N');
                }
            }
            while(true){
                if (d == a[1]){
                    break;
                }
                else if(d==a[2] || d==a[3] || d==a[4]){
                    roll('A');
                }
                else {
                    break;
                }
            }
        }
        else if(c==a[2] || c==a[3]){
            while(true){
                if (c==a[0]){
                    break;
                }
                else{
                    roll('W');
                }
            }
            while(true){
                if (d == a[1]){
                    break;
                }
                else if(d==a[2] || d==a[3] || d==a[4]){
                    roll('A');
                }
                else {
                    break;
                }
            }
        }
    }
    int answer1(){
        return a[0];
    }
    int answer2(){
        return a[2];
    }
};

int main(){
    int n;
    cin >> n;
    Dice d[n];
    for (int i=0; i<n ;i++){
        for (int j=0; j<6 ;j++){
            cin >>d[i].a[j];
        }
    }
    string answer2 ="Yes";
    for (int k=0; k<n; k++){
        for (int l=k+1; l<n; l++){    
            string answer ="No";
            for (int i=0; i<4;i++){
                d[l].roll('A');
                for (int j =0; j<4 ;j++){
                    d[l].roll('N');
                    if (d[l].a[0]==d[k].a[0] && d[l].a[1]==d[k].a[1]&& d[l].a[2]==d[k].a[2] && d[l].a[3]==d[k].a[3] && d[l].a[4]==d[k].a[4] && d[l].a[5]==d[k].a[5] ){
                        answer = "Yes";
                    }
                }
            }
            for (int i=0; i<4;i++){
                d[l].roll('A');
                for (int j =0; j<4 ;j++){
                    d[l].roll('W');
                    if (d[l].a[0]==d[k].a[0] && d[l].a[1]==d[k].a[1]&& d[l].a[2]==d[k].a[2] && d[l].a[3]==d[k].a[3] && d[l].a[4]==d[k].a[4] && d[l].a[5]==d[k].a[5] ){
                        answer = "Yes";
                    }
                }
            }
            for (int i=0; i<4;i++){
                d[l].roll('W');
                for (int j =0; j<4 ;j++){
                    d[l].roll('N');
                    if (d[l].a[0]==d[k].a[0] && d[l].a[1]==d[k].a[1]&& d[l].a[2]==d[k].a[2] && d[l].a[3]==d[k].a[3] && d[l].a[4]==d[k].a[4] && d[l].a[5]==d[k].a[5] ){
                        answer = "Yes";
                    }
                }
            }
            if (answer =="Yes"){
                answer2 ="No";
            }
        }
    }
    cout << answer2 << endl;
    return 0;
}