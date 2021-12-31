#include <stdio.h>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    char str1[80];
    char str2[15]="Saya Belajar ";
    char str3[11]="Code Block";
    strcpy(str1,str2);
    strcat(str1,str3);
    printf("Hasil Penggabungan Dengan STRCAT    : %s\n",str1);
    strcpy(str1,str2);
    strncat(str1,str3,2);
    printf("Hasil Penggabungan dengan STRNCAT   : %s\n",str1);
    return 0;
}
