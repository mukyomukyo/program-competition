#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }
    vector<int> cutdegree(n+1);
    cutdegree.at(0) = vec.at(0);
    cutdegree.at(n) = 360;
    for (int i = 0; i < n-1; i++){
        if (cutdegree.at(i)+vec.at(i+1)>360){
            cutdegree.at(i+1) = cutdegree.at(i)+vec.at(i+1)-360 ;
        }
        else {
            cutdegree.at(i+1) = cutdegree.at(i)+vec.at(i+1) ;
        }
    }
    sort(cutdegree.begin(), cutdegree.end());
    vector<int> degree(n+1);
    degree.at(0) = cutdegree.at(0);
    for (int j=1; j<n+1; j++){
        degree.at(j) = cutdegree.at(j)- cutdegree.at(j-1);
    }
    sort(degree.begin(),degree.end());
    cout << degree.at(n) << endl;
    return 0;
}