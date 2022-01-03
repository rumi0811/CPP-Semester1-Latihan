//Tampilan Array bulan
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{

    string bulan[100]={"januari", "februari", "maret", "april", "mei", "juni", "juli", "agustus", "september", "oktober", "november", "desember"};

    cout<<"Nilai awal pada elemen array : "<<endl;
    cout<<"Bulan[1] = "<<bulan[0]<<endl;
    cout<<"Bulan[2] = "<<bulan[1]<<endl;
    cout<<"Bulan[3] = "<<bulan[2]<<endl;
    cout<<"Bulan[4] = "<<bulan[3]<<endl;
    cout<<"Bulan[5] = "<<bulan[4]<<endl;
    cout<<"Bulan[6] = "<<bulan[5]<<endl;
    cout<<"Bulan[7] = "<<bulan[6]<<endl;
    cout<<"Bulan[8] = "<<bulan[7]<<endl;
    cout<<"Bulan[9] = "<<bulan[8]<<endl;
    cout<<"Bulan[10] = "<<bulan[9]<<endl;
    cout<<"Bulan[11] = "<<bulan[10]<<endl;
    cout<<"Bulan[12] = "<<bulan[11]<<endl;
    cout<<endl;

    //perubahan nilai elemen
    bulan[0]={"desember"};
    bulan[1]={"november"};
    bulan[2]={"oktober"};

    bulan[9]={"januari"};
    bulan[10]={"februari"};
    bulan[11]={"maret"};

    cout<<"Setelah perubahan nilai : "<<endl;
    cout<<"Bulan[1] = "<<bulan[0]<<endl;
    cout<<"Bulan[2] = "<<bulan[1]<<endl;
    cout<<"Bulan[3] = "<<bulan[2]<<endl;
    cout<<"Bulan[4] = "<<bulan[3]<<endl;
    cout<<"Bulan[5] = "<<bulan[4]<<endl;
    cout<<"Bulan[6] = "<<bulan[5]<<endl;
    cout<<"Bulan[7] = "<<bulan[6]<<endl;
    cout<<"Bulan[8] = "<<bulan[7]<<endl;
    cout<<"Bulan[9] = "<<bulan[8]<<endl;
    cout<<"Bulan[10] = "<<bulan[9]<<endl;
    cout<<"Bulan[11] = "<<bulan[10]<<endl;
    cout<<"Bulan[12] = "<<bulan[11]<<endl;
}
