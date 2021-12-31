#include <stdio.h>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    char string[31];
    char *str1 = "Selamat Pagi";
    char str2[31];

    strcpy(string, str1);
    printf("Isi String : %s\n", string);
    strncpy(str2, str1, 4);
    printf("Isi Str2 : %s", str2);
    return 0;
}
