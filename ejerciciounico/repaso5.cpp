#include <iostream>
using namespace std;

int potencia(int base, int exp)
{
    int p=1;
    for(int k=1; k<=exp; k++)
        p=p*base;

        return p;
}

int main()
{
    cout<<endl<<"2 elevado a las 5 es: "<<potencia(2,5);

    return 0;
}