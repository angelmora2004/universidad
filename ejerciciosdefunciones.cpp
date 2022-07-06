#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <cmath>
using namespace std; 
//ejercicio propio
/*
Ejercicio 15: Diseñe la función que calcula el resultado de la siguiente serie:

2! - 3! + 4! - 5! + 6! - N!

N es un parámetro que indica el límite de la serie

Nota: El símbolo ! significa: factorial
*/
void FactorialS(int n)
{
    int r; long int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    if (f % 2 == 0)
        {
        r = (-f) - r;
        }
    else
    {
        r = f + r;
    }
    }
    cout << r << endl;
}

/*
Ejercicio 1: Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números.
*/

double promedio(double n1, double n2, double n3)
{
    return (n1+n2+n3)/3;
}

/*
Ejercicio 5: Escriba la función que recibe como parámetro 1 entero y devuelve el cubo del mismo.
*/
void numero(double num)
{
    double elevado = pow(num, 3);
    cout<<"El numero "<<num << " elevado al cubo es "<<elevado;
}

/*
Ejercicio 6: Una función recibe 2 enteros como parámetros, 
el primero es el número base, mientras que el segundo indica el exponente al que se va elevar el número base. 
Por ejemplo, si el primer número es 2 y el segúndo número es 5, el proceso a realizar sería 2 x 2 x 2 x 2 x 2 = 32 
(en otras palabras 2 elevado a la quinta potencia).
*/ 
void numero(double num1, double num2)
{
    double elevado = pow(num1, num2);
    cout<<"El numero "<< num1 << "elevado al "<< num2 << "es "<< elevado <<endl;
}

/*
ejercicio 7: Diseñe la función que determina la cantidad de cifras que tiene un número entero - este entero pasa como parámetro. Por ejemplo:

si el número es 12 tiene 2 cifras

si el número es 157 tiene 3 cifras

si el número es 999 tiene 3 cifras

si el número es 15000 tiene 5 cifras. 

si el número es -145 tiene 3 cifras
*/
template<typename T>
size_t countDigits(T n)
{
    string tmp;

    tmp = to_string(n);
    return tmp.size();
}


void Cifras(int num1, int num2){
    cout << "El numero de cifras en " << num1 << " es igual a: " << countDigits(num1) << endl;
    cout << "El numero de cifras en " << num2 << " es igual a: " << countDigits(num2) << endl;
}

/*
Ejercicio 9: Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. La función debe imprimir la tabla de multiplicar desde el 1 al 15. Por ejemplo:

5 x 1 = 5

5 x 2 = 10

5 x 3 = 15

...

...

5 x 15 = 75
*/
void multiplicar(int num)
{
  for (int i; i <= 15; i++)
  {
  cout <<endl<< num << " x " << i << " = " << (num*i);
  }
  
}

/*
Ejercicio: 10 Diseñe la función que recibe como parámetro 1 entero positivo que indica una tabla de multiplicar. 
La función debe imprimir la tabla de multiplicar desde el 12 al 1. Por ejemplo:

5 x 12 = 60

5 x 11 = 55

5 x 10 = 50

...

...

5 x 1 = 5
*/
int Entero(int n)
{
  for (int i = 12; i >= 1; i--){
    cout << "\n" <<  n << " x " << i << " = " << (n*i) << endl;
  }
  return n;
}

/*
Ejercicio 11: Diseñe la función que recibe como parámetro un entero N comprendido 1 y 10. 
La función debe imprimir las tablas de múltiplicar desde el 1 a N. Por ejemplo, si N=3, se imprimirá:
Tabla del 1
1 x 1 = 1
1 x 2 = 2
...
1 x 10 = 10
Tabla del 2
2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20
Tabla del 3
3 x 1 = 3
3 x 2 = 3
...
3 x 10 = 30
*/
void Tablas(int final)
{
  if (final >= 1; final <= 10){
    for (int i = 1; i <= final; i++)
      for (int k = 1; k <= final; k++){
        cout << "\n" << i << " X " << k << " = " << (i * k);
    }
  }
}

/*
Ejercicio 12: Diseñe la función que calcula la ecuación cuadrática, usando las fórmulas siguientes:

x1 = (-b+ raizCuadrada(b*b - 4*a*c))/(2*a)

x2 = (-b- raizCuadrada(b*b - 4*a*c))/(2*a)

Los valores a,b,c pasan como parámetros de la función.

x1 - x2 son parámetros por referencia que devuelven los resultados de la ecuación.

La función devuelve 1 si es una ecuación válida, y 0 si la ecuación no es válida.
*/
void Valores(float a, float b, float c){
    float x1, x2;
    float x = (b*b) - (4*a*c); 
    
    if (x <= 0){
        x = x*(-1);
        cout<<"Solución solo en números complejos"<<endl;
        cout<<"Solución en numeros complejos: " <<(-b/(2*a))<<" + "<<(sqrt(x)/(2*a))<<"i y "<<(-b/(2*a))<<" - "<<(sqrt(x)/(2*a))<<"i"<<endl;
    }else{

        x1 = (-b + sqrt(x)) / (2*a);
        x2 = (-b - sqrt(x)) / (2*a);
        
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
}

/* 
Ejercicio 13: Diseñe la función que devuelve el resultado de la siguiente serie:

1 - 2 + 3 - 4 + 5 - 6 + 7 - N

N es un parámetro que indica el límite de la serie
*/
void Recursion(int n)
{
    int r = 0;
    for(int i = 1 ; i <=  n; i ++){
        if(i%2 == 0){
            r += i;
        }else{
            r -= i;
        }
    }
    cout << r << endl;
}
/*
Ejercicio 17: Figura en espejo: Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es 'o', la figura sería:
o
oo
ooo
oooo
ooo
oo
o
*/
void filas2(int n)
{
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++ )
        {
            cout << "o";
        }
        cout<<endl;
    }
    for (int i=n-1; i>0; i--)
    {
        for(int j=0; j<i; j++ )
        {
            cout << "o";
        }
        cout << endl;
    }
}

/*
Ejercicio 24: Diseñe la función que recibe como parámetro 2 enteros y los devuelve intercambiados. 
Por ejemplo si num1=45 y num2=50, luego de llamar a la función num1 sería igual a 50 y num2 igual a 45.
*/
void Intercambio(int r, int s)
{
  cout << s << " = " << r << endl;
  cout << r << " = " << s << endl;
}


int main()
{
    //ejercicio 15
    FactorialS(7);
    cout<<endl;
    //ejercicio 1
    double p;
    cout<<endl<<"Promedio de 3 números";
    p=promedio(18.5, 20.11, 23.99);
    cout<<endl<<"El promedio es: "<<p;
    cout<<endl;
    //ejercicio 5
    numero(3);
    cout<<endl;
    //ejercicio 6
    numero(3, 4);
    cout<<endl;
    //ejercicio 7
    Cifras(3, 2022);
    cout<<endl;
    //ejercicio 9
    multiplicar(4);
    cout<<endl;
    //ejercicio 10
    Entero(5);
    cout<<endl;
    //ejercicio 11
    Tablas(2);
    cout<<endl;
    //ejercicio 12 
    Valores(3, 5, 10);
    cout<<endl;    
    //ejercicio 13
    Recursion(7);
    cout<<endl;
    //ejercicio 17
    cout << "\n";
    int n = 4;
    filas2(n);
    cout<<endl;
    //ejercicio 24
    Intercambio(45, 50);
    cout<<endl;
    return 0;
}