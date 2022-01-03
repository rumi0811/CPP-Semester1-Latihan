//penggunaan public pada class
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
garis()
{
cout <<"==============================\n";
}
class siswa //deklarasi class
{
public:
char nis[15],nama[20];
float nilai;
};
main()
{
siswa sekolah;
garis();
cout<<endl;
cout<<" ~~~Program Nama Siswa~~~"<<endl;
garis();
cout<<" Input NIS = "; cin>>sekolah.nis;
cout<<" Input Nama siswa = "; cin>>sekolah.nama;
cout<<" Input nilai akhir = "; cin>>sekolah.nilai;
garis();
cout<<endl;
cout<<" Nilai Siswa"<<endl;
garis();
cout<<" NIS = "<<sekolah.nis<<endl;
cout<<" Nama siswa = "<<sekolah.nama<<endl;
cout<<" Nilai akhir = "<<sekolah.nilai<<endl;
garis();
getch();
}
