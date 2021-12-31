#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
int i, j;
char c='A';
for (i=1; i<=5; i++)
{ for(j=1; j<=i; j++)
{
printf("3%c",c);
}
c++;
printf("\n");
}
getch();
}

