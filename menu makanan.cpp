#include<iostream>
using namespace std;
int main (){
 int kode,harga,jumlah,total,bayar,kembali;
 char mad;
 do 
 {
 	cout<<"\n\n\n";
 cout<<"============================"<<endl;
 cout<<"Menu Makanan Warung ChinuLz"<<endl;
 cout<<"============================"<<endl;
 cout<<""<<endl;
 cout<<"Menu Makanan Harga"<<endl;
 cout<<"1. Ayam Geprek Rp. 17.000"<<endl;
 cout<<"2. Ayam Penyet Rp. 15.000"<<endl;
 cout<<"3. Mie Goreng Spesial Rp. 11.000"<<endl;
 cout<<"4. Nasi Goreng Rp. 12.000"<<endl;
 cout<<"============================"<<endl;
 cout<<'\n'<<"Masukan No Menu Pilihan : ";
 cin>>kode;
 switch (kode){
 case 1:
  cout<<'\n'<<"Ayam Geprek"<<endl;
  harga=17000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 2:
  cout<<'\n'<<"Ayam Penyet"<<endl;
   harga=15000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 3:
  cout<<'\n'<<"Mie Goreng Spesial"<<endl;
   harga=11000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 4:
  cout<<'\n'<<"Nasi Goreng"<<endl;
   harga=12000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 default:
 cout<<"Kode yang anda masukkan tidak ada dalam menu";
 }
 } 
 while (mad/='Y');
 cout<<"Terimah Kasih Atas Kunjungan Anda"<<endl;
 return 0;
}
