/**< Inisialisasi Array Dimensi 2*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Nama   : Sekar Puspita Arum" << endl;
    cout << "NIM    : 2021310029" << endl;
    int A [2][4] = {11,12,13,14,21,22,23,24};
    int i,j;
    cout << "Aplikasi matriks ordo 2 x 4 " <<endl;
    cout << endl;

    for (i=0; i<2; i++)
    {
    for (j=0; j<4; j++)
    {
        cout << "[" << i << "][" << j << "] = " <<A[i][j] <<" ";
    }
    cout << endl;
    }
    return 0;
}
