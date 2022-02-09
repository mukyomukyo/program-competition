#include <iostream>
using namespace std;
int main(){
    int a , b, c;
    cin >> a>> b>> c;
    if (b > a){
        if ( c > b ){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}