#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
char catatan(float x);
main()
{
    int o;
    struct
    {
        char nameperson[20];
        char nomernpm[20];
        float angka;
    }mahasiswa[5];
    for(o=1; o<2; o++)
    {
        cout<<"Masukkan data yang anda ingin masukkan : "<<o++<<endl;
        cout<<"Masukkan NIM     : ";cin>>mahasiswa[o].nomernpm;
        cout<<"Masukkan Nama    : ";cin>>mahasiswa[o].nameperson;
        cout<<"Masukkan Nilai   : ";cin>>mahasiswa[o].angka;
    }
    for(o=1; o<2; o++)
    {
        cout<<"Data     : "<<o++<<endl;
        cout<<"NIM      : "<<mahasiswa[o].nomernpm<<endl;
        cout<<"Nama     : "<<mahasiswa[o].nameperson<<endl;
        cout<<"Nilai    : "<<mahasiswa[o].angka<<endl;
        cout<<"Ket      : ";
        cout<<catatan(mahasiswa[o].angka)<<endl;
    }
    getch();
}
    char catatan(float x)
    {
        if(x>65)
            return 'L';
        else
            return 'G';
    }

