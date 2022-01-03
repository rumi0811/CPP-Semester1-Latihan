#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

dijumlah(int h, int k)
{
    h+=5;
    k+=7;
    cout<<"\n\n Nilai di dalam fungsi tambah";
    cout<<"\n h = "<<h<<" k = "<<k;
    cout<<endl;
}
main()
{
    int c, d;
    c=5;
    d=9;
    cout<<"Nilai sebelum fungsi digunakan ";
    cout<<"\n c = "<<c<<" d = "<<d;
    dijumlah(c,d);
    cout<<"\n Nilai setelah fungsi digunakan";
    cout<<"\n c = "<<c<<" d = "<<d;
    getch();
    return 0;
}
