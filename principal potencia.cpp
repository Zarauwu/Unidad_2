#include "Potencia1.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
   int b,a,d,c;
    cout<< "Programa de potencia"<<endl;
    cout<<"Ingresa la base"<<endl;
    cin>>b;
    cout<<"Ingrese el exponente"<<endl;
    cin>>a;
    
    cout<<"¿Quiere calcular la potencia recursiva?...SI(0)...NO(1)"<<endl;
    cin>>d;

    cout<<"¿Quiere clacular la potencia Iterativa?...SI(0)...NO(1)"<<endl;
    cin>>c;
    
    
    Potencia poten;
    poten.potenciaIterativa(b,a);
    poten.potenciaRecursiva(b,a);
    poten.visualizar();
    

    system("pause");
    return 0;
}
