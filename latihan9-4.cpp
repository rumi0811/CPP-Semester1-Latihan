#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
    int i,j;
    int data_nil[8][8];
    char p,npm[10],nama[20];
    atas:

    cout<<"Masukkan NPM :";cin>>npm;
    cout<<endl;
    cout<<"Masukkan Nama :";cin>>nama;
    cout<<endl;

    for(i=1;i<=3;i++)
    {
    for (j=1;j<=2;j++)
        {
            cout<<"\t Data Ke - ["<<i<<","<<j<<"]"<<endl;
            cout<<"\t NILAI ANDA = ";cin>>data_nil[i][j];
        }
    cout<<endl;
    }
    cout<<"\t DATA NILAI MAHASISWA "<<endl;
    cout<<"\t UNIVERSITAS BINA INSANI "<<endl;
    cout<<"\t NIM : "<<npm<<endl;
    cout<<"\t NAMA : "<<nama<<endl;
    cout<<"\t ------------------------"<<endl;
    cout<<"\t SMT NIL.UTS NIL.UAS "<<endl;
    cout<<"\t ------------------------"<<endl;
    for (i=1;i<=3;i++)
    {
        cout<<setiosflags(ios::right)<<setw(10)<<i;
        for (j=1;j<=2;j++)
        {
            cout<<setiosflags(ios::right)<<setw(6);
            cout<<data_nil[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
        cout<<"\t -------------------------"<<endl;
        printf("\n\t Mau nyoba lagi [Y/T] = ");
        p=getche();
        if (p=='Y'||p=='y')
        goto atas;
        cout<<endl;
        getch();
}
