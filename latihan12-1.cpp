#include<stdio.h>
#include<conio.h>
#include<cstring>
#include<iomanip>
#include<iostream>

using namespace std;
int main()
{
    int jumlahbeli, hargakue, totalkue;
    char nama[50], kodekue, namakue[50], atas, balik, ulangan;
    atas://label
    cout<< "\t\t ======================================="<<endl;
    cout<< "\t\t Toko Kue Harvest Cake"<<endl;
    cout<< "\t\t ======================================="<<endl;
    cout<< "\t\t Kode   Nama            Harga"<<endl;
    cout<< "\t\t Kue    Kue             Kue"<<endl;
    cout<< "\t\t A      Black Forest    Rp.150.000,-"<<endl;
    cout<< "\t\t B      Birthday Cake   Rp.200.000,-"<<endl;
    cout<< "\t\t C      Tiramisu Cake   Rp.250.000,-"<<endl;
    cout<< "\t\t ======================================="<<endl;
    cout<< "Nama Pembeli     = ";cin>>nama;
    ulangan://label
    cout<< "Kode Kue (A/B/C) = ";cin>>kodekue;
    if(kodekue=='A'||kodekue=='a')
        {
            strcpy(namakue, "Black Forest");
            hargakue=150000;
        }
    else if(kodekue=='B'||kodekue=='b')
        {
            strcpy(namakue, "Birthday Cake");
            hargakue=200000;
        }
    else if(kodekue=='C'||kodekue=='c')
        {
            strcpy(namakue, "Tiramisu Cake");
            hargakue=250000;
        }

    else{
        cout<< "Masukkin yang bener dong sayang"<<endl;
        goto ulangan;
        }

    cout<< "Jumlah Beli      = ";cin>>jumlahbeli;
    cout<< "\t\t Data Penjualan Cake"<<endl;
    cout<< "\t\t ======================================="<<endl;
    cout<< "\t\t Nama Pembeli   : "<<nama<<endl;
    cout<< "\t\t Kode Kue       : "<<kodekue<<endl;
    cout<< "\t\t Jenis Kue      : "<<namakue<<endl;
    cout<< "\t\t Harga Kue      : "<<hargakue<<endl;
    cout<< "\t\t Jumlah Beli    : "<<jumlahbeli<<endl;
    cout<< "\t\t ======================================="<<endl;
    totalkue=jumlahbeli*hargakue;
    cout<< "\t\t Total          : "<<totalkue<<endl;
    cout<< "\t\t Input Lagi?[T/Y] : ";cin>>balik;
    if(balik=='Y'||balik=='y')
    {
        goto atas;
    }
    else if(balik=='T'||balik=='t')
    {
        system("cls");
    }
}
