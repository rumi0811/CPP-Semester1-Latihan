#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
  char string[80];
  int panjang;
  printf("Masukkan String : "); gets(string);
  panjang=strlen(string);
  printf("Panjang String Adalah %i Karakter\n", panjang);

  return 0;
}
