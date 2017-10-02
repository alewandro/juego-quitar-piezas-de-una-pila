#include <iostream>
#include "Arco.h"
#include "Grafo.h"
#include <list>
#include <math.h>

using namespace std;

void arma_arbol(Grafo &arbol_dejuego, int niveles){
	
	int ultimo_nodo_nivel= 0;

	for (int i=0; i>= niveles, i++){
		
	}

	while (niveles != 0){

	}

	agregar_arco(int origen, int destino, const int & costo)

}



int main(){
	
	int fichas;			// la cantidad de ficha al inicio
	int a;	 		// accion: n° de fichas a quitar.  1<= a <=3

	int utilidad; 	// utilidad es igual a la cantidad de fichas de la ultima accion


	cout << endl << "Ingrese la cantidad de fichas de la pila: ";
	cin >> fichas; 
	cout << endl;
	for (int i= fichas; i>= 0; i--)
		cout << i << endl;
	cout << endl;

	// 1)
	// Generación del árbol de juego (espacio de búsqueda). Se
	// generarán todos los nodos hasta llegar a un estado terminal.

	// la cantidad de nodos seria sumatoria desde i=0 hasta i=p-1 de a^i
	Grafo arbol_dejuego( (1-pow(3, fichas)) / (1-3) );
	cout << "cantidad de nodos: " << arbol_dejuego.devolver_longitud() <<endl;

	/* c/nodo del grafo tiene esta estructura:
				struct nodo{
				int estado;
				int utilidad;
				std::list<Arco> lista_arcos;	
				};
	*/


	arma_arbol(arbol_dejuego, fichas);


	// 2)
	// Calcular los valores de la función de evaluación para cada
	// hoja del árbol.

	// 3)
	// Calcular el valor de un nodo interior a partir del valor de sus
	// hijos.


	// 4) 
	// Elegir la jugada conveniente a partir de estos valores.
	




	return 0;
}