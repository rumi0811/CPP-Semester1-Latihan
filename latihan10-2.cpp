#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;

//blok program fungsi dengan parameter formal
char coment(char ket[30], int n) //prototipe fungsi
{
    int a;
    a=n%2;
    if(a==1)
        strcpy(ket, "--Bilangan Ganjil--");
    else
        strcpy(ket, "--Bilangan Genap--");
}
//blok program fungsi dengan parameterr aktual
main()
{
    char lagi, c[30];
    int i;
    atas://label
        system("cls");
        {
            cout<<"\nMasukkan Nilai Yang Anda Inginkan = ";cin>>i;
            coment(c,i);//parameter formal
            cout<<c;
            cout<<"\n\n Ingin Menginput Data Lagi?[Y/T] = ";cin>>lagi;
        }
        if(lagi=='Y'||lagi=='y')
            goto atas;
        else
            getch();
}
