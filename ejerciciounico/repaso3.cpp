#include<iostream>
using namespace std;
//Escriba la función que determina si un número pasado como parámetro es par o impar.
bool parImpar(int num)
{
    //devuelve true cuando es par, devuelve false cuando es impar
    if(num % 2==0)
        return true; //es par
    else
        return false; //es impar                
}

// Escriba la función que determina si un número pasado como parámetro es múltiplo de 5

bool multiplode5(int num)
{
if(num % 5==0)
    return true;
else 
    return false;
}



int main()
{
int n=12;
if((n)==true)
{
    cout<<endl<<n<<" Es multiplo";
}
else
{
    cout<<endl<<n<<" No es multiplo";
}    







int n=15;
if(parImpar(n)==true)
{
    cout<<endl<<n<<" Es par";
}
else
{
    cout<<endl<<n<<" Es impar";
}    

    return 0;   
}
