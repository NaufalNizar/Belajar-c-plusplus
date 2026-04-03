#include <iostream>
using namespace std;

int main (){
    cout<<"Masukan nilai : ";
    int n;
    cin>>n;

    for(int q = 1; q <= n;q++){
        for(int qq = q; qq <= n - 1;qq++){
            cout<<" ";
        }
        for(int qw = 1; qw <= q*2-1;qw++){
            if(qw == 1 || qw == q*2-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int q = 1;q <= n;q++){
        for(int qq = 1;qq <= q;qq++){
            cout<<" ";
        }
        for(int qw = n*2-(q*2-1)-2;qw >= 1;qw--){
            if(qw == 1 || qw == n*2-(q*2-1)-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
}