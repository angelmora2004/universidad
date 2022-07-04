/*
Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.
*/
#include<iostream>
using namespace std;

double promedio(double n1, double n2, double n3, double& suma)
{
    //suma es un parametro por referencia 
    //n1,n2,n3 son parametros por valor 
    suma=(n1+n2+n3);
    return suma/3;
}


int main()
{

    double p;
    double suma; 
    p=promedio(22.4, 35, 30, suma);
    cout<<endl<<"La suma de 22.4 + 35 + 30 es: "<<suma;
    cout<<", y el promedio es: "<<p;
    return 0;
}