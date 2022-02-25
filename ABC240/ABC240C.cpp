#include<bits/stdc++.h>
using namespace std;
/*bool kari( int sum, int n, vector<int> &vec){
    if (n==0 && sum ==vec.at(0)){
        return true;
    }
    else if(n==0 && sum != vec.at(0)){
        return false;
    }
    else{
        for(int i=0; i<n; i++){
            if (vec.at(i)==sum){
                return true;
            }
        }
        if (kari(sum-vec.at(n-1),n-1, vec)||kari(sum,n-1, vec)){
            return true;
        }
        else {
            return false;
        }
    }
}*/
int main(){
    int n,x;
    cin >> n >>x;
    vector<int>veca(n);
    vector<int>vecb(n);
    vector<int>vec(n);
    int suma =0; 
    for (int i=0;i<n;i++){
        cin >> veca.at(i) >>vecb.at(i) ;
        vec.at(i)=vecb.at(i)-veca.at(i);
        suma +=veca.at(i);
    }
    sort(vec.begin(), vec.end());
    int answer = x-suma;
    bool exist = false;
    for (int bit = 0; bit < (1<<n); ++bit)
    {
        int sum = 0; // 部分集合の和
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // i が S に入っているなら足す
                sum += vec[i];
            }
        }

        // sum が K に一致するか
        if (sum == answer) exist = true;
    }
    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
    /*for (int i=0;i<n;i++){
        int j=i;
        int temp =sum;
        while(j>=0){
            if (temp > vec.at(j)){
                temp -= vec.at(j);
            }
            if (temp == vec.at(j)){
                ans ="Yes";
            }
            j--;
        }
    }*/
}