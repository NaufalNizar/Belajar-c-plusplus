#include <iostream>

using namespace std;

int main(){
	
	float angka1, angka2, hasil;
	char per,opr;
	
	do{
	cout<<"masukan nilai pertama = ";
	cin>>angka1;
	cout<<"tentukan operasi + / - / x / :"<<endl;
	cin>>opr;
	cout<<"masukan nilai kedua = ";
	cin>>angka2;
	
	switch(opr){
		case '+' :
			hasil= angka1 + angka2;
			cout<<angka1<<" + "<<angka2<<" = "<<hasil<<endl;
			break;
		case '-' :
			hasil = angka1-angka2;
			cout<<angka1<<" - "<<angka2<<" = "<<hasil<<endl;
			break;
		case 'x' :
			hasil= angka1 * angka2;
			cout<<angka1<<" x "<<angka2<<" = "<<hasil<<endl;
			break;
		case ':' :
			if ( angka2 == 0){
				cout<<"ERROR"<<endl;
				break;
			}
			else{
				hasil = angka1/angka2;
				cout<<angka1<<" : "<<angka2<<" = "<<hasil<<endl;
				break;
			}
		default :
		cout<<"masukan operasi yang benar!"<<endl;	
	}
	cout<<"apakah kamu mau mengulangi lagi? ketik 'y' untuk ya dan 't' untuk tidak "<<endl;
	cin>>per;
    }while(per == 'y');
    
    cout<<"tekan enter untuk menyelesaikan";

	

	return 0;
	
}
