# include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << a/b <<" "<< a % b << " ";
    double c = double(a)/ double(b);
    printf("%.5lf\n", c);
    return 0;
}