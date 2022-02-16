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
    }
    int answer1(){
        return a[0];
    }
};

int main(){
    Dice d;
    for (int i=0;i<6;i++){
        cin >> d.a[i];
    }
    string s;
    cin >>s;
    for (int i=0; i<s.size();i++){
        d.roll(s[i]);
    }
    cout << d.answer1() << endl;
    return 0;
}