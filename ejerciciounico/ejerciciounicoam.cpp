/*
Ejercicio 15: Diseñe la función que calcula el resultado de la siguiente serie:
2! - 3! + 4! - 5! + 6! - N!
N es un parámetro que indica el límite de la serie
Nota: El símbolo ! significa: factorial
*/
#include <iostream>

using namespace std; 
int main()
{
    int suma=0, factorial, N;

    for (int i=2,; i<=N; i++)
    {
        factorial=1;
    }
    for (int k=1; k<=i; k++){
        factorial*=k;
    }
    if (i%2==0)
    suma+=factorial;
    else 
    suma-=factorial;
}


/*
5. Escriba la función que recibe como parámetro 1
entero y devuelve el cubo del mismo.
*/
#include<iostream>
#include<math.h>
using namespace std;

void funcion_cubo(float x, float y)
{
cin>>x;
y=pow(x,3);
cout<<"El cubo del numero "<<x<<" es: "<<y<<endl;

}
int main()
{
float a,b; 

}