#include <iostream>
using namespace std;

int main(){
    int y;
    cout<<"masukan nilai:  ";
    cin>>y;
    cout<<"pola1"<<endl;
    for(int i = 1;i <= y;i++){
        for(int x = 1;x <= i;x++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"pola 2"<<endl;
    for(int i = 1;i <= y;i++){
        for(int x = y;x >= i;x--){
            cout<<"*";
        }
    cout<<endl;
    }
    cout<<"pola 3"<<endl;
    for(int i = 1;i <= y;i++){
        for(int x = 1;x < i;x++){
            cout<<" ";
        }
        for(int z = y;z >= i;z--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"pola 4"<<endl;
    for(int i = 1;i <= y;i++){
        for(int x = y - 1;x >= i;x--){
            cout<<" ";
        }
        for(int z = 1;z <= i;z++){
            cout<<"*";
        }
        cout<<endl;
    }
    
   

}