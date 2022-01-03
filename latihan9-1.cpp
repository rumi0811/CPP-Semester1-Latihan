//array dimensi 1 latihan 1
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int nama_si_array[15];

    cout<<"Masukkan Nilai Pada : " <<endl;

    //perulangan memsukkan nilai array

    for(int C=0; C<10; C++)
    {
        cout<<"Elemen["<<C<<"] = ";
        cin>>nama_si_array[C];
    }
    cout<<"\n";

    cout<<"Tampilkan nilai yang dimasukkan "<<endl;

    //perulangan menampilkan nilai array

    for(int D=0; D<10; D++)
    {
        cout<<"Nilai yang teradapat pada elemen ke ";
        cout<<D+1<<"="<<nama_si_array[D]<<endl;
    }
    cout<<"\n";

    //perulangan menampilkan nilai array satu baris

    for(int D=0; D<10; D++)
    {
        cout<<nama_si_array[D]<<endl;
    }
    cout<<"\n";
    getch();
}
