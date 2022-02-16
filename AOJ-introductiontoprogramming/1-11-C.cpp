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
    Dice d1;
    Dice d2;
    for (int i=0;i<6;i++){
        cin >> d1.a[i];
    }
    for (int i=0;i<6;i++){
        cin >> d2.a[i];
    }
    d1.makenum(d2.a[0], d2.a[1]);
    if (d1.a[0]==d2.a[0] && d1.a[1]==d2.a[1]&& d1.a[2]==d2.a[2] && d1.a[3]==d2.a[3] && d1.a[4]==d2.a[4] && d1.a[5]==d2.a[5] ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}