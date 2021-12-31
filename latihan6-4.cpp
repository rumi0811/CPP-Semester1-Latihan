#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    char str1[5]="ABCD", str2[5]="abcd",str3[5]="BCDE",str4[5]="BCda";
    int hasil;
    cout<<"str[5]=ABCD,str2[5]=abcd,str3[5]=BCDE,str4[5]=BCda"<<endl;
    hasil=strcmp(str1,str2);
    printf("Hasil STRCMP        : ");
    if(hasil==0) printf("String 1 sama dengan string 2 \n");else
    if(hasil>0) printf("String 1 lebih besar dari string 2 \n"); else
    if(hasil<0) printf("String 1 lebih kecil dari string 2 \n");

    hasil=strcmp(str1,str2);
    printf("Hasil STRCMPI       : ");
    if(hasil==0) printf("String 1 sama dengan string 2 \n");else
    if(hasil>0) printf("String 1 lebih besar dari string 2 \n"); else
    if(hasil<0) printf("String 1 lebih kecil dari string 2 \n");

    hasil=strncmp(str3,str4,5);
    printf("Hasil STRNCMP       : ");
    if(hasil==0) printf("String 3 sama dengan string 4 \n");else
    if(hasil>0) printf("String 3 lebih besar dari string 4 \n"); else
    if(hasil<0) printf("String 3 lebih kecil dari string 4 \n");

}
