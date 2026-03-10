#include <iostream>
using namespace std;

int main(){
    int f,n;
    cout<<"Program Deretan Fibonachi\n";
    cout<<"Masukan Suku Ke-n:";
    cin>>n;

    int fn,fn1,fn2;
    fn2 = 0;
    fn1 = 1;
    cout<<1<<" ";
   for(int i = 1;i<=n;i++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;

        cout<<fn<<" ";


   }


    return 0;
}