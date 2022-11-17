#include <iostream>
#include <cstdlib>

using namespace std;

class Potencia
{
	private:
		int P;
		
	public:
	    Potencia(){P=0;}
	    int potenciaRecursiva(int x, int n);
	    int potenciaIterativa(int x, int n);
		void visualizar();	
};
int Potencia::potenciaIterativa(int x, int n)
{
	int q=1;
	for(int i=1;i<=n;i++)
	{
		q=q*x;
	
	}
		cout<<"la potencia es ="<<q<<endl;
}
int Potencia::potenciaRecursiva(int x, int n)
{
	if(n==0)
	{
		return P=1;
	}
	else
	return P=n*potenciaRecursiva(x, n-1);
}

void Potencia::visualizar()
{
	cout<<"La potencia es= "<<P<<endl;
}
