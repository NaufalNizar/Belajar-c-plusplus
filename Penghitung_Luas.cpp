#include <iostream>
#include <string>
const float phi = 3.14;
using namespace std;

int main(){
	string op,pil;
	float x,y,hasil;
	cout<<"KALKULATOR PENGHITUNG LUAS\n\n";
	cout<<"MAU MENGHITUNG APA? 'lingkaran' atau 'persegi' atau 'segitiga'\n";
	cin>>op;
	cout<<endl;
	do{
	if (op == "persegi" || op == "Persegi" || op == "PERSEGI"){
		cout<<"\nmasukan panjang sisi persegi: ";
		cin>>x;
		hasil = x*x;
		cout<<endl;
		cout<<"luas persegi: \n\n"<<hasil;
	}
	else if(op=="lingkaran" || op == "Lingkaran" || op == "LINGKARAN"){
		cout<<"masukan jari jari lingkaran: ";
		cin>>x;
		hasil = phi*(x*x);
		cout<<endl;
		cout<<"luas lingkaran: \n\n"<<hasil;
		
	}
	else if (op=="segitiga" || op == "Segitiga" || op == "SEGITIGA"){
		cout<<"masukan alas: ";
		cin>>x;
		cout<<"masukan tinggi: ";
		cin>>y;
		hasil = 0.5 * x * y;
		cout<<endl;
		cout<<"luas segitiga: \n\n"<<hasil;
	}
	else{
		cout<<"perintah tak dikenali\n\n";
	}
	cout<<"apa kamu mau mengulangi? ketik ya\n";
	cin>>pil;
	}while(pil == "ya" || pil == "Ya" || pil == "YA");
	
	cout<<"tekan ENTER";
	
	return 0;
}
