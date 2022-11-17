#include "fibonacci.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, char * arg[])

{
   int i,d,c;
    cout<< "Programa de fibonacci"<<endl;
    cout<<"Ingresa el numero de la suma"<<endl;
    cin>>i;
    
    cout<<"¿Desea calcular la suma recursiva?...SI(0)...NO(1)"<<endl;
    cin>>d;

    cout<<"¿Quiere clacular la suma Iterativa?...SI(0)...NO(1)"<<endl;
    cin>>c;
    
    
   fibonacci fibo;
    fibo.fibonacciIterativa(i);
    fibo.fibonacciRecursiva(i);
    fibo.visualizar();
    

    system("pause");
    return 0;
}

