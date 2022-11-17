#include <iostream>                                                                                                                                     //Montante Quiroz Kevyn Francisco
#include <cstdlib>                                                                                                                                      //15 De Septiembre De 2022
#include <new>
#include "Sucesion.h"

using namespace std;

int main (int argc, char * arg[]) {
	int buscar, rec, Salir = 2;
	int *Arreglo;
		do {
			cout<<"Programa de sucesion"<<endl;
			cout<<"Ingrese n numeros "<<endl;
			cin>>buscar;
			Sucesion Sucesion (buscar);
			Arreglo = new int [buscar];
			cout<<"Como desea calcular la operacion: "<<endl;
			cout<<"1.- Iterativo"<<endl;
			cout<<"2.- Recursiva"<<endl;
			cin>>rec;
			switch (rec) {
				case 1:
					cout<<"operacion Iterativa"<<endl;
					Sucesion.SucesionIterativa(buscar);
					Sucesion.VisualizarIterativa();
					break;
				case 2:
					cout<<"operacion Recursiva"<<endl;
					Sucesion.VisualizarRecursiva();
					break;	
				default:cout<<"ERROR...Elija otra opcion"<<endl;
				}
			Sucesion.Liberar ();
			cout<<"\nQuiere continuar con la operacion..."<<endl;
			cout<<"Si --- Presione 0"<<endl;
			cout<<"No --- Presione 1"<<endl;
			cin>>Salir;
			}while(Salir == 2);
	
	getchar();
	system("pause");
	return 0;
}

//Claudia Valeria Zarazua Beltran
//Viernes 24 de Septiembre de 2022
