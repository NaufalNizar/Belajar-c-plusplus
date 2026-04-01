#include <iostream>
using namespace std;

int main(){
    cout<<"masukan nilai : ";
    int n;
    cin>>n;

    for(int q = 1;q <= n;q++){
        for(int qq = 1;qq < q;qq++){
            cout<<" ";
        }
        for(int qw = (n*2-(q*2-1));qw >= 1;qw--){
            cout<<"*";
        }
        cout<<endl;
    }
}