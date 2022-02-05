#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;

    int count = 0;
    for (int i = 0; i < 3; i++){
        if (str.at(i) == '1'){
            count++;
        }
    }
    cout << count << endl;
}