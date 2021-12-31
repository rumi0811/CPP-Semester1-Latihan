#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
int bil = 1;
do
{
if (bil >= 6)
break;
cout<<bil<<" ";
}
while(bil++);
getch();
}

