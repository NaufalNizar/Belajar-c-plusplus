#include <iostream>

using namespace std;

int main(){
     cout<<"masukan nilai : ";
     int n;
     cin>>n;

     for(int q = 1; q <= n; q++){
        for(int w = n - 1; w >= q;w--){
            cout<<" ";
        }
        for(int e = 1;e <= (q*2-1);e++){
            cout<<"*";
        }
        cout<<endl;
     }
}