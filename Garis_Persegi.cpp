#include <iostream>
using namespace std;

int main (){
    cout<<"Masukan nilai : ";
    int n;
    cin>>n;

    for(int q = 1;q <= n;q++){
        if(q == 1||q == n){
            for(int qq = 1;qq <= n;qq++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int qq = 1; qq <= n;qq++){
                if(qq == 1 || qq == n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}