#include <iostream>
using namespace std;
int main(){
    int S;
    cin >> S;
    int a = S % 60;
    int b = S / 60;
    int c = b % 60;
    int d = b / 60;
    cout << d << ':' << c << ':' << a << endl; 
    return 0;
}