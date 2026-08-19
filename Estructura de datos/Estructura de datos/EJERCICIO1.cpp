//ESTRUCTURA DE DATOS 
#include <iostream> //permite salida e ingreso de datos 
#include <vector> // para que pueda tarabajr con listas y vectores

using namespace std; //permite omitir el std en cada salida de mensaje

int main1() {
	vector <int> numero; // [solo numeros enteros] = [10,100,20,30 ,40]
													//0   1  2  3   4
														

	//1-. INSERTAR DATOS O AGREGAR ELEMENTOS 
	numero.push_back(10);
	// numero.apend(10) esto es en pyhton
	numero.push_back(20);
	numero.push_back(30);

	//2-. INSERTAR UN DATO EN ALGUNA POSICION ESPECIFICA DE MI VECTOR O LISTA
	numero.insert(numero.begin() + 1, 100);  //[10,15,20]


	//3-. ELIMINAR EL ULTIMO ELMENTO DE LA LISTA O VECTOR 
	numero.pop_back();
	//numeros.pop() es es en pyhton
	
	//4-. Imprimir y mostrar el vector 



	cout << "Vector resultante";
	for (int i : numero) {
		cout << i << ""; //Salida esperada [10,15,20]
	}
	return 0;
}
