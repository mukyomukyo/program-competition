# include <iostream>
using namespace std;
int main(){
    for (int i=0; i<10000; i++){
        int a;
        cin >> a;
        if (a==0){
            break;
        }
        cout << "Case" << " "<< i+1 << ":" << " " << a << endl;
    }
    return 0;
}