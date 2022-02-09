#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 1;
    for (int i=0; i<3; i++ ){
        a = a*n;
    }
    cout << a << endl;
    return 0;
}