#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    struct
{
    char nim[15];
    char namamahasiswa[20];
    int nilai;
}mahasiswa;
cout<<"Masukkan NIM     : ";cin>>mahasiswa.nim;
cout<<"Masukkan Nama    : ";cin>>mahasiswa.namamahasiswa;
cout<<"Masukkan Nilai   : ";cin>>mahasiswa.nilai;
cout<<"\n\n Data yang anda di inputkan adalah : \n"<<endl;
cout<<"NIM      : "<<mahasiswa.nim<<endl;
cout<<"Nama     : "<<mahasiswa.namamahasiswa<<endl;
cout<<"Nilai    : "<<mahasiswa.nilai<<endl;
getch();
}
