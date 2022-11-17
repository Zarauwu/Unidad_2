#include <iostream>
#include <cstdlib>
#include <new>

using namespace std;

class Serie {
	private:
		int *Arreglo1, *Arreglo2;
		int A, B, C;
	
	public:	
		Serie (int N) {C = N; A = 8; B = 11; Arreglo1 = new int [N]; Arreglo2 = new int [N];}
		int SerieIterativa (int C);
		int SerieRecursiva (int C);
		void VisualizarIterativa ();
		void VisualizarRecursiva ();
		void Liberar ();
		};
	int Serie::SerieIterativa (int C) {
		for(int i=0; i<C; i++) {
			A = A - B;
			Arreglo1[i] = A;
 		}
	}
	int Serie::SerieRecursiva (int C) {
		if(C == 1) {
			return C = - 3;
			}
		else {
			return C = - B + SerieRecursiva (C - 1);
		}
	}
	void Serie::VisualizarIterativa () {
    	for (int i=0; i< C; i++) {
    		cout<< Arreglo1 [i] <<"\t";
    	}
	}
	void Serie::VisualizarRecursiva () {
    	for (int i=1; i<=C; i++) {
			Arreglo2 [i] = SerieRecursiva (i);
			cout<< Arreglo2 [i] <<"\t";
			}
		}
	void Serie::Liberar () {
    	delete [] Arreglo1;
		delete [] Arreglo2;
		}
