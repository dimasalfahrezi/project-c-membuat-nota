#include<iostream>
#include<stdlib.h>

using namespace std;

class penambahanData{
	private:
	int stock;
	
	public:
	void pensil();
	void buku();
void penghapus();
};

void penambahanData::pensil(){
	int stock = 8, stockpensil,total;
	cout<<"MASUKAN JUMLAH STOCK BARANG ="; cin>>stockpensil;
	total = stock + stockpensil;
	cout<< "total stok pensil adalah "<<total<<endl;
	
}

void penambahanData::buku(){
	int stock = 10, stockbuku,total;
	cout<<"MASUKAN JUMLAH STOCK BARANG ="; cin>>stockbuku;
	total = stock + stockbuku;
	cout<< "total stok buku "<<total<<endl;
	
}

void penambahanData::penghapus(){
	int stock = 8, stockpenghapus,total;
	cout<<"MASUKAN JUMLAH STOCK BARANG ="; cin>>stockpenghapus;
	total = stock + stockpenghapus;
	cout<< "total stok penghapus adalah "<<total<<endl;
	
}
int main (int argc,char**argv){
int pilih;
cout<<"NO.\t nama barang\t stock"<<endl;
cout<<"1.\t pensil \t 8"<<endl;
cout<<"2.\t buku\t\t 10"<<endl;
cout<<"3.\t penghapus\t 28"<<endl;

cout<<"pilih barang yang akan ditambah stocknya [1,2,3];=";cin>>pilih;

if(pilih==1){
	penambahanData pensil;
	pensil.pensil();
	cout<<"terima kasih"<<endl;
	
}
if(pilih== 2){
	penambahanData buku;
	buku.buku();
	cout<<"terimakasih"<<endl;
}
if(pilih == 3){
	penambahanData penghapus;
	penghapus.penghapus();
	cout<<"terimakasih"<<endl;
}
return 0;
system ("PAUSE");
}
