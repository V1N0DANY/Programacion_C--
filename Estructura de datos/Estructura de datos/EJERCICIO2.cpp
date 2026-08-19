//ESTRUCTURA DE DATOS 
#include <iostream> //permite salida e ingreso de datos 
#include <vector> // para que pueda tarabajr con listas y vectores

using namespace std; //permite omitir el std en cada salida de mensaje

int main(){

	//1-. DECLARAR UN VECTOR VACIO
	vector <int> numeros;
	//DECLARO UNA VARIABLE 
	int valor;


	//Verificar si esta vacio al arrancar el programa

	if (numeros.empty()) { //empty para ver el tamaño de mi vector (en pyhton es len)
		cout << "El vector eta vacio actualmente "; 
	}

	//2-. INSERTAR DATOS POR TECLADO
	cout << "Ingrese el numero para insertar: ";
	cin >> valor;
	numeros.push_back(valor);


	//3-.ELIMINAR EL UTLIMO ELEMENTO INGRESADO

	numeros.pop_back();

	//4-. MOSTRAR LISTA 

	if (numeros.empty()) { //empty para ver el tamaño de mi vector (en pyhton es len)
		cout << "La lista esta vacia";
	}
	else {
		cout << "Contenido actual de la lista es:";
			for (int i : numeros) {
				cout << i << " ";
		}
	}

	cout << endl;
	return 0;




}