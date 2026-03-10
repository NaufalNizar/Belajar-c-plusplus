#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"masukan nilai:";
    cin>>x;

    for(int i = 1;i <= x;i++){
        for(int n = 1;n<=i;n++){
            cout<<"*";
        }
    cout<<endl;
    }
    for(int i = 1;i <= x;i++){
        for(int n = x -1 ;n>=i;n--){
            cout<<"*";
        }
    cout<<endl;
    }
    return 0;

}