#include <iostream>
using namespace std;

int main()
{
char nama[50];
char umur[50];
char asal[50];
cout<<"\n\n";
cout<<"======ISI BIODATA====== \n";
cout<<"\n";
cout<<"Masukan nama : ";
cin.getline(nama,50);
cout<<"Masukan umur : ";
cin.getline(umur,50);
cout<<"Asal daerah  : ";
cin.getline(asal,50);
cout<<"======================= \n";
cout<<"\n\n\n\n";
printf("          BERIKUT ADALAH BIODATA SAYA\n");
cout<<"\n\n";
cout<<"===================[BIODATA]=================== \n";
cout<<"\n";
cout<<"Nama Saya Adalah    : \t"<<nama;
cout<<"\nUmur Saya Sekarang  : \t"<<umur;
cout<<"\nAsal Daerah Saya    : \t"<<asal;
cout<<"\n";
cout<<"=============================================== \n";
cout<<"\n\n\n";

}