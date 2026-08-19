//ESTRUCTURA DE DATOS 
#include <iostream> //Libreria permite salida e ingreso de datos 
#include <vector> // Libreria para que pueda tarabajr con listas y vector
#include <string> //Libreria para manejar texto

using namespace std; //permite omitir el std en cada salida de mensaje

int main() {
	//DECLARANDO VECTOR Y VARIABLES 
	vector <string> lista;
	string productos;
	int opcion;

	//Bucle do-while ejecuta el codigoal menos un vez y se repite 
	do {
		//Imprimimos el menu de opciones
		cout << "-----MI lista de compras---------\n";
		cout << "1-. Agregar producto \n";
		cout << "2-. Eliminar por posicion \n";
		cout << "3-. Mostrar lista \n";
		cout << "4-. Salir \n";

		cout << "Seleccione un opcion: \n"; 
		cin >> opcion;

		//Opciones 
		if (opcion == 1) {
			cout << "Escriba el nombre del producto"; 
			cin >> productos;
			lista.push_back(productos);
			cout << "!Producto agregado correctamente!\n";
		}
		else if (opcion == 2){
			//Revisamos si la lsiat esta vacia 
			if (lista.empty()) {
				cout << "No hay nada que borrar, lista vacia";
			}
			else {
				int pos; //declaro variable 
				cout << "Ingrese la posicion a borrar de (0 adelante" << lista.size() - 1 << "):";
				cin >> pos;
				if (pos >= 0 && pos < lista.size()) {
					lista.erase(lista.begin() + pos);
					cout << "Producto eliminado con exito \n";
				}
				else {
					cout << ("Posicion invalida \n");
				}
		}
			//Opcion 3: Mostar
		else if (opcion == 3) {
			if (lista.empty()) {
				cout << "La lisat es vacia\n";
			}
			else {
				cout << "--Tus productos--";
				for (size_t i = 0; i < lista.size(); i++) {
					cout << i << "." << lista[i] << "\n";
				}
			}
		}
		
		while (opcion != 4); //Ciclo finaliza  cuando el usuario coloque 4 o diferente a ese numoro
		cout << "Hasta luego" << endl; //imprimimos salida 
		return 0;

		
		}