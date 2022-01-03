//penggunaan private pada class
#include <conio.h>
#include <iostream>
#define pi 3.14
using namespace std;
class tabung
{
private: //deklarasi private class
int j,t;
float v,k;
public:
tabung();
void keluaran(); //function
};
main()
{
tabung s;
s.keluaran();
getch();
}
tabung::tabung()
{
cout<<"\n Menghitung Tabung"<<endl;
cout<<"=============================="<<endl<<endl;
cout<<" Masukan Jari-Jari = ";cin>>j;
cout<<" Masukan Tinggi = ";cin>>t;
v=(pi*j*j)*t;
k=(2*(pi*2*j))+t;
}
void tabung::keluaran()
{
cout<<endl;
cout<<" Volume tabung = "<<v<<endl;
cout<<" Keliling tabung = "<<k<<endl;
}
