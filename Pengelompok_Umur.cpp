#include<iostream>

using namespace std;

int main(){
	int umur;
	cout<<"masukan umurmu : ";
	cin>>umur;	
	
	if(umur >= 18){
		cout <<"kamu sudah dewasa";
	}
	else if(umur >=12){
		cout<<"kamu remaja";
	}
	else{
		cout<<"kamu anak anak";
	}
	return 0;
	
}
