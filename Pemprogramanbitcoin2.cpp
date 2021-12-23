#include <iostream>
using namespace std;

int main (){
	
	/*ikhsan saputra
	  2117051037
	  kelas B*/
	  
   	 // deklarasi variabel//
	string tanggal_transaksi;
	string bulan_transaksi;
	int tahun_transaksi;
	double jumlah_uang; 
	float harga_perbitcoin;
	
     //input//
    cout<<"--------------------TRANSAKSI MATA UANG CRYPTOCURRENCY------------------------\n"<<endl;
	cout<<"Masukkan tanggal transaksi :"     ;getline(cin,tanggal_transaksi);
	cout<<"Masukkan bulan transaksi   :"     ;getline(cin,bulan_transaksi);
	cout<<"Massukkan tahun transaksi  :"     ;cin>>tahun_transaksi;  
	cout<<"Masukkan jumlah_uang(Rp)   :"     ;cin>>jumlah_uang;
	cout<<"Masukkan harga per1 bitcoin:"     ;cin>>harga_perbitcoin;

	
	 //output//
	cout<<endl;
	cout<<"------------------------RIWAYAT MATA UANG CRYPTOCURRENCY-------------------------\n"<<endl;
	cout<<"Tanggal transaksi :"<< tanggal_transaksi <<" "<<bulan_transaksi<<" "<<tahun_transaksi<<endl;
	cout<<"jumlah bitcoin    :"<< jumlah_uang/harga_perbitcoin <<" "<<"bitcoin"<<endl;
	
	return 0;
}
