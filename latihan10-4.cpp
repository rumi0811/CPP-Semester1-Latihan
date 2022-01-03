#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

jumlah(int *k, int *o)
{
    *k+=9;
    *o+=5;
    cout<<endl;
    cout<<"\n Nilai Akhir Fungsi Tambah";
    cout<<"\n K = "<<*k<<" O = "<<*o;
}
main()
{
    int c,d;
    c=4;
    d=6;
    cout<<"Nilai Sebelum Pemanggilan Fungsi"<<endl;
    cout<<"\n C = "<<c<<" D = "<<d;
    jumlah(&c,&d);
    cout<<endl;
    cout<<"\n Nilai Setelah Pemanggilan Fungsi";
    cout<<"\n C = "<<c<<" D = "<<d;
    getch();
    return 0;

}
