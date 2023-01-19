#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a ;
    int count =0;
    if(a.at(0) !='a'){
        for(int i :{1,2,3,4,5,6}){
            if(a.at(i) =='a'){
                string  b = "";
                if (i!=6){
                    b =a.substr(i+1,6-i);
                }
                a ='a' +a.substr(0,i)+b;
                count +=i-0;
            }
        }
    }
    if(a.at(1) !='t'){
        for(int i :{2,3,4,5,6}){
            if(a.at(i) =='t'){
                string  b = "";
                if (i!=6){
                    b =a.substr(i+1,6-i);
                }
                a ="at" +a.substr(1,i-1)+b;
                count +=i-1;
            }
        }
    }
    if(a.at(2) !='c'){
        for(int i :{3,4,5,6}){
            if(a.at(i) =='c'){
                string  b = "";
                if (i!=6){
                    b =a.substr(i+1,6-i);
                }
                a ="atc" +a.substr(2,i-2)+b;
                count +=i-2;
            }

        }
    }
    if(a.at(3) !='o'){
        for(int i :{4,5,6}){
            if(a.at(i) =='o'){
                string  b = "";
                if (i!=6){
                    b =a.substr(i+1,6-i);
                }
                a ="atco" +a.substr(3,i-3)+b;
                count +=i-3;
            }
        }
    }
    if(a.at(4) !='d'){
        for(int i :{5,6}){
            if(a.at(i) =='d'){
                string  b = "";
                if (i!=6){
                    b =a.substr(i+1,6-i);
                }
                a ="atcod" +a.substr(4,i-4)+b;
                count +=i-4;
            }
        }
    }
    if(a.at(5) !='e'){
        for(int i :{6}){
            if(a.at(i) =='e'){
                string  b = "";
                if (i!=6){
                    b =a.substr(i+1,6-i);
                }
                a ="atcode" +a.substr(5,i-5)+b;
                count +=i-5;
            }
        }
    }
    cout << count << endl;
}
