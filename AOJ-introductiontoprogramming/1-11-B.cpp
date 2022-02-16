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
        
    }
    int answer1(){
        return a[0];
    }
    int answer2(){
        return a[2];
    }
};

int main(){
    Dice d;
    for (int i=0;i<6;i++){
        cin >> d.a[i];
    }
    int q;
    cin >>q;
    for (int i=0; i<q;i++){
        int c,e;
        cin >> c >> e;
        if (c==d.a[0] || c==d.a[1]|| c==d.a[4]|| c==d.a[5]){
            while(true){
                if (c==d.a[0]){
                    break;
                }
                else{
                    d.roll('N');
                }
            }
            while(true){
                if (e == d.a[1]){
                    break;
                }
                else{
                    d.roll('A');
                }
            }
        }
        else{
            while(true){
                if (c==d.a[0]){
                    break;
                }
                else{
                    d.roll('W');
                }
            }
            while(true){
                if (e == d.a[1]){
                    break;
                }
                else{
                    d.roll('A');
                }
            }
        }
        cout << d.answer2() << endl;
    }
    return 0;
}