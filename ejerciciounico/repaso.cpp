#include<iostream>
using namespace std; 

/*
1. escriba la funcion que recibe como parametro 3 numeros reales de doble precision y devuelve el promedio de estos numeros
*/
double promedio(double n1, double n2, double n3)
{
    return (n1+n2+n3)/3;
}
int main()
{
    double p;
    cout<<endl<<"Promedio de 3 numeros: ";
    p=promedio(18.5, 20.11, 23.99);
    cout<<endl<<"El promedio es: "<<p;

    cout<<endl<<"El promedio de los 3 numeros es: ";
    cout<<promedio(10,15,20);
    return 0;
}