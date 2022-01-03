#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    struct data
    {
        char nim[20];
        char nama[20];
        int nilaiakhir;
    };
    data murid;
    cout<<"Nama Mahasiswa   : ";cin>>murid.nama;
    cout<<"Nim Mahasiswa    : ";cin>>murid.nim;
    cout<<"Nilai Akhir      : ";cin>>murid.nilaiakhir;
    cout<<"\n\n Data yang anda masukkan adalah sebagai berikut"<<endl;
    cout<<"Nama     : "<<murid.nama<<endl;
    cout<<"NIM      : "<<murid.nim<<endl;
    cout<<"Nilai    : "<<murid.nilaiakhir<<endl;
}
