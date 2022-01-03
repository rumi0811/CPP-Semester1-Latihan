#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    struct {
    char nama[25], jns[20], kode;
    int harga, jumbel, total;
    }kue[10];

    int o, m;
    char x;

    atas://label
        cout<< "\t\t Toko Kue Harvest Cake"<<endl;
        cout<< "\t\t ================================================="<<endl;
        cout<< "\t\t Kode   Nama            Harga"<<endl;
        cout<< "\t\t Kue    Kue             Kue"<<endl;
        cout<< "\t\t ================================================="<<endl;
        cout<< "\t\t A      Black Forest    Rp. 150.000,-"<<endl;
        cout<< "\t\t B      Birthday Cake   Rp. 200.000,-"<<endl;
        cout<< "\t\t C      Tiramisu Cake   Rp. 250.000,-"<<endl;
        cout<< "\t\t ================================================="<<endl;
        cout<< "\n Masukkan jumlah beli : ";cin>>m;
        cout<<endl;
        for(o=1; o<=m; o++)
        {
            cout<< "Data Ke         : "<<o<<endl;
            cout<< "Nama Pembeli    : ";cin>>kue[o].nama;
            cout<< "Kode Kue        : ";cin>>kue[o].kode;
            cout<<endl;
            if(kue[o].kode=='A'||kue[o].kode=='a')
            {
                strcpy(kue[o].jns, "Black Forest");
                kue[o].harga=150000;
            }
            else if(kue[o].kode=='B'||kue[o].kode=='b')
            {
                strcpy(kue[o].jns, "Birthday Cake");
                kue[o].harga=200000;
            }
            else if(kue[o].kode=='C'||kue[o].kode=='c')
            {
                strcpy(kue[o].jns, "Tiramisu Cake");
                kue[o].harga=250000;
            }
            cout<< "Jenis Kue       : "<<kue[o].jns<<endl;
            cout<< "Harga Kue       : "<<kue[o].harga<<endl;
            cout<< "Jumlah Beli     : ";cin>>kue[o].jumbel;
            kue[o].total=kue[o].jumbel*kue[o].harga;
            cout<< "Total Bayar     : "<<kue[o].total<<endl;
        }
            cout<< "\t\t\tData Penjualan Cake"<<endl;
            cout<< "=========================================================================================="<<endl;
            cout<< "No     Nama            Kode    Jenis            Harga           Jumlah      Jumlah total"<<endl;
            cout<< "       Pembeli         Kue     kue              Kue             Beli        Kue"<<endl;
            cout<< "=========================================================================================="<<endl;
            cout<<endl;
            for(o=1;o<=m;o++)
            {
                cout<<setiosflags(ios::left)<<setw(3)<<o;
                cout<<setiosflags(ios::left)<<setw(20)<<kue[o].nama;
                cout<<setiosflags(ios::left)<<setw(25)<<kue[o].kode;
                cout<<setiosflags(ios::left)<<setw(30)<<kue[o].jns;
                cout<<setiosflags(ios::left)<<setw(35)<<kue[o].harga;
                cout<<setiosflags(ios::left)<<setw(40)<<kue[o].jumbel;
                cout<<setiosflags(ios::left)<<setw(45)<<kue[o].total;
                cout<<endl;
                cout<< "================================================="<<endl;
                cout<<"Mau Input Lagi Ngga?[Y/T] : "<<x<<endl;
                x=getche();
                if(x=='Y'||x=='y')
                    goto atas;
                getch();
            }

}
