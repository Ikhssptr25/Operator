#include <iostream>
using namespace std;

int main (){
	
	/*ikhsan saputra
	  2117051037
	  kelas B*/
	  
   	 // deklarasi variabel//
	float jumlah_bitcoin_dibeli;
	float harga_pembelian;
	float harga_saatini;
	float x; 
	float y;
	
     //input//
	cout<<"Jumlah Bitcoin yang dibeli :"     ;cin>>jumlah_bitcoin_dibeli;
	cout<<"Harga Pembelian            :"     ;cin>>harga_pembelian;
	cout<<"Harga Saat Ini             :"     ;cin>>harga_saatini;  
	
	//MESIN
	x=((harga_saatini-harga_pembelian)/harga_pembelian)*100 ;
	y=((harga_saatini - harga_pembelian)*jumlah_bitcoin_dibeli)/1000000 ;
	
	 //output//
	cout<<endl;
	cout<<"Kenaikan/Penurunan  :"<< x <<"%"<<endl;
	cout<<"Keuntungan/Kerugian :"<< y <<" "<<"juta"<<endl;
	
	return 0;
}
