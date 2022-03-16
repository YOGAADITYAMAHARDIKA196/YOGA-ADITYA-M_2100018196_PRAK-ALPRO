#include <iostream>
#include "funtion.h"
using namespace std;


int main(){
	int hasil;
	int msuk,inpt;
	
	cout<<"\t\tPILIHLAH JENIS OPERASI KALKULATOR UNTUK MENGHITUNG "<<endl;
	cout<<" 1. Penjumlahan "<<endl;
	cout<<" 2. Perkalian "<<endl;
	cout<<" 3. pembagian "<<endl;
	cout<<" 4. pengurangan "<<endl;
	cout<<"============================================================="<<endl;
	cout<<"[] Masukkan operasi perhitungan untuk memulai  : []";cin>>inpt;
	cout<<"============================================================="<<endl;
	
	if(inpt==1){
		int i,j;
			cout<<" Masukkan angka pertama : ";cin>>i;
			cout<<" Masukkan angka ke dua  : ";cin>>j;
		cout<<"=========================================================="<<endl;
		cout<<" Hasil penjumlahan adalah : "<<jumlah(i,j)<<endl;
			
	}
	
	if(inpt==2){
		int i,j;
			cout<<" Masukkan angka pertama : ";cin>>i;
			cout<<" Masukkan angka ke dua  : ";cin>>j;
		cout<<"=========================================================="<<endl;
		cout<<" Hasil perkalian adalah : "<<kali(i,j)<<endl;
			
	}
	if(inpt==3){
		int i,j;
			cout<<" Masukkan angka pertama : ";cin>>i;
			cout<<" Masukkan angka ke dua  : ";cin>>j;
		cout<<"=========================================================="<<endl;
		cout<<" Hasil pembagian adalah : "<<bagi(i,j)<<endl;
			
	}
	if(inpt==4){
		int i,j;
			cout<<" Masukkan angka pertama : ";cin>>i;
			cout<<" Masukkan angka ke dua  : ";cin>>j;
		cout<<"=========================================================="<<endl;
		cout<<" Hasil pengurangan adalah : "<<kurang(i,j)<<endl;
			
	}
	
}
