#include <iostream>
using namespace std;

int main(){
	int atm,trans,tarik,setor;
	int bhs,pro,pin;
	int nominal,jumlah;
	
	cout<<"==========================================="<<endl;
	cout<<"| Masukkan kartu ATM		: ";cin>>atm;			//variabel ini perumpamaan atm, maka masukkan dengan nominal saja
	cout<<"==========================================="<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"|\t1.Indonesia			  |"<<endl;
	cout<<"|\t2.Inggris			  |"<<endl;
	cout<<"-------------------------------------------"<<endl;
	
	cout<<" Masukkan bahasa yang di gunakan : ";cin>>bhs;
	cout<<"==========================================="<<endl;
	
if(bhs == 1){
		//berisi proses penarikan,transfer,setoran
		cout<<"| Masukkan pin atm anda  	: ";cin>>pin;
		cout<<"-------------------------------------------"<<endl;
		cout<<"|\t1.Transer Uang			  |"<<endl;
		cout<<"|\t2.Tarik Tunai			  |"<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"| Masukkan proses transaksi : ";cin>>pro;
		
		if(pro == 1){
			//proses transfer uang
			int rek;
			string per,terbilang;
			jumlah=atm-nominal;
			
			cout<<"| Masukkan rekening tujuan  : ";cin>>rek;
			cout<<"| Masukkan jumlah nominal   : ";cin>>nominal;
			cin.ignore();
			cout<<"| Mominal terbilang adalah  : ";getline(cin,terbilang);
			cout<<"| Apakah no rekening benar  : ";cin>>per;
			if(per== "ya"){
				cout<<"| Aasukkan pin atm anda     : ";cin>>pin;
				cout<<"-----------------------------------------"<<endl;
				cout<<"| Berhasil mntransfer sebesar    : "<<nominal<<endl;
				cout<<"| Terbilang nominal\t        : "<<terbilang<<endl;
				cout<<"| Sisa saldo anda	 \t: "<<atm-nominal<<endl;
			}
		}

	if(pro == 2){
			//proses tarik tunai
			int a,b,c,d,rek;
			string per,terbilang,tab;
			
			a=300000;
			b=500000;
			c=700000;
			d=1000000;
			
			cout<<"============================================="<<endl;
			cout<<"| Masukkan jumlah nominal penarikan......."<<endl;
			cout<<"| \t1. "<<a<<endl;
			cout<<"| \t2. "<<b<<endl;
			cout<<"| \t3. "<<c<<endl;
			cout<<"| \t4. "<<d<<endl;
			cout<<"| \t5. Nominal lainya....."<<endl;
			cout<<"============================================="<<endl;
			cout<<"| Masukkan jenis nominal        : ";cin>>nominal;
			cout<<"|--------------------------------------------"<<endl;
			//jika penarikan nominal a
		if(nominal==1){
			int tot= atm-a;
			string A= "tiga ratus ribu";
			cout<<"| Menggunakan rekening tabungan : ";cin>>per;
				if(per=="ya"){
			cout<<"| Berhasil menarik uang sebesar : "<<a<<endl;
			cout<<"| Terbilang nominal             : "<<A<<endl;
			cout<<"| Sisa saldo anda               : "<<tot<<endl;
				}	
		}
		//jika penarikan nominal b
		if(nominal==2){
			int tot= atm-b;
			string B= "lima ratus ribu";
			cout<<"| Menggunakan rekening tabungan : ";cin>>per;
				if(per=="ya"){
			cout<<"| Berhasil menarik uang sebesar : "<<b<<endl;
			cout<<"| Terbilang nominal             : "<<B<<endl;
			cout<<"| Sisa saldo anda               : "<<tot<<endl;
				}	
		}
		//jika penarikan nominal c
		if(nominal==3){
			int tot= atm-c;
			string C="tujuh ratus ribu";
			cout<<"| Menggunakan rekening tabungan : ";cin>>per;
				if(per=="ya"){
			cout<<"| Berhasil menarik uang sebesar : "<<c<<endl;
			cout<<"| Terbilang nominal             : "<<C<<endl;
			cout<<"| Sisa saldo anda               : "<<tot<<endl;
				}	
		}
		//jika penarikan nominal d
		if(nominal==4){
			int tot= atm-d;
			string D= "satu juta rupiah";
			cout<<"| Menggunakan rekening tabungan : ";cin>>per;
				if(per=="ya"){
			cout<<"| Berhasil menarik uang sebesar : "<<d<<endl;
			cout<<"| Terbilang nominal             : "<<D<<endl;
			cout<<"| Sisa saldo anda               : "<<tot<<endl;
				}	
		}
			
		if(nominal==5){
			cout<<"| Masukkan nominal angka    : ";cin>>nominal;
			cin.ignore();
			cout<<"| Nominal terbilang adalah  : ";getline(cin,terbilang);
			cout<<"| Apakah rekening tabungan  : ";cin>>per;
			
			if(per== "ya"){
				cout<<"| Masukkan pin atm anda     : ";cin>>pin;
				cout<<"-----------------------------------------"<<endl;
				cout<<"| Berhasil menarik uang sebesar : "<<nominal<<endl;
				cout<<"| Terbilang nominal\t        : "<<terbilang<<endl;
				cout<<"| Sisa saldo anda	 \t: "<<atm-nominal<<endl;
			}
		}
			}
		else{
			cout<<" Sory!!,English mode is not avaible yet...."<<endl;
			cout<<" Programerrs will do development!!!"<<endl;
		}
}
	// proses ATM dalam bahasa inggris
	// flo silahkan di translate yg bahasa indonesianya aja
	//nanti kalo udah di translate bagian proses atm bhs indo yg else isi cout bahasa inggris di hapus
	
	
	return 0;
}
