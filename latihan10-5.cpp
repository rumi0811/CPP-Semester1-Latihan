#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
//membuat function siswa dan garis
siswa(float uts, float uas)
{
    return((uts+uas)/2);
}
void garis()
{
    cout<<"========================================="<<endl;
}
main()
{
    char nim[15], nama[20], ket[15], lagi;
    float a, b, rata;
    cout<<"Perhitungan Nilai Siswa "<<endl;
    garis();
    cout<<"Masukkan NIM         : ";cin>>nim;
    cout<<"Masukkan Nama        : ";cin>>nama;
    cout<<"Masukkan UTS         : ";cin>>a;
    cout<<"Masukkan UAS         : ";cin>>b;
    rata=siswa(a, b);
    printf("\n Rata-rata Nilai   : %3.2f", rata);
    if(rata>59)
        strcpy(ket, "LULUS");
    else
        strcpy(ket, "TIDAK LULUS");
    cout<<"\n Keterangan        : "<<ket<<endl;
    getch();
    return 0;
}
