#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
int I, J;
for (I=1; I<=5; I++)
{ for( J=1; J<=6-I; J++)
{
printf("%3i",J);
}
printf("\n");
}
getch();
}
