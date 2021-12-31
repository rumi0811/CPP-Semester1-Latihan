#include <iostream>

using namespace std;
int main()

{
    int i;
    for (i=0; 1<10; i++)
    {
        if(i==2) continue;
        cout << "Bilangan " <<i<<endl;
        if(i==8) break;
    }
}
