#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
pangkasan(int*belbar, int*potongan)
{
    if(*belbar > 5000000)
    {
        *potongan=*belbar * 35/100;
    }
    else if(*belbar >= 1000000 && *belbar <= 5000000)
    {
        *potongan=*belbar * 20/100;
    }
    else
    {
        *potongan=0;
    }

}
main()
{
    int buy, potongan, plus;
    cout<<"Program Hitung Diskon"<<endl;
    cout<<"Besar Pembelin Barang Rp. ";cin>>buy;
    pangkasan(&buy,&potongan);
    cout<<"Besar diskon yang diberikan Rp. "<<potongan<<endl;
    plus=buy-potongan;
    cout<<"Besar Harga yang harus diberikan Rp. "<<plus<<endl;

}
