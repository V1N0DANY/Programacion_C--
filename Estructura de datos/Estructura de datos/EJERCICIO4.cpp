#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	//declaracion de variables y vectores
	vector <string> nombres;
	vector <int> edades;
	vector <int> cedulas;
	string nombre;
	int edad;
	int ci;
	int opcion;
	int pos;
	do {
		//OPCION 1
		//Colocar el menu para ingresar datos 
		cout << "===========SISTEMAS DE REGISTRO===========";
		cout << "1-. Regsitrar nombre de persona: ";
		cout << "2-. Mostrar todos los registros";
		cout << "3-. Eliminar posicion";
		cout << "4-. Salir";

		if (opcion == 1) {
			cout << "Ingrese Los Datos de la persona: ";
			cout << "Ingrese su Nombre: ";
			cin >> nombre;
			cout << "Ingrese su Edad: ";
			cin >> edad;
			cout << "Ingrese su Cedula: ";
			cin >> ci;

			nombres.push_back(nombre);
			edades.push_back(edad);
			cedulas.push_back(ci);

			cout << "!Registro Exitoso\n";
		}
		else if (opcion==2){
			if (nombres.empty()) { //es un metodo que me ayuda a ver si tengo algo en la lita

				cout << "La lista esta vacia";
			}
			else{
				cout << " Lista de Registros de personas";
				// Bucle for para recorrer el vector desde el indice 0 hasta lista.size() - 1
				for (size_t i = 0; i < nombres.size(); i++) {
					cout << "Posicion " << i << "--";
					cout << "Nombres" << nombres[i];
					cout << "Edades" << edades[i];
					cout << "Ci" << cedulas[i]; "\n";

			}
		}
	}


		else if (opcion == 3) { //ELIMINAR POR POSICION
			if (nombres.empty()) { //es un metodo que me ayuda a ver si tengo algo en la lita

				cout << "La lista esta vacia";
			}
			else {
				int pos;
				cout << "Ingrese la posicion que deseas eliminar "; // 1
				cin >> pos;
				 //pos = 1
				
				//VALIDAMOS LA POSICION
									// pos = 2    
													//nombres [carlos,daniel]
				if (pos == 0 && pos < nombres.size()){

					//size es un metodo que te ayuda a ver el tamñaño del vector
	// lista.begin() da un iterador al inicio; se le suma 'pos' para ir al elemento exacto
					nombres.erase(nombres.begin() + pos);
					edades.erase(edades.begin() + pos);
					cedulas.erase(cedulas.begin() + pos);
					cout << "Registro Eliminado";

				}
				else {
					cout << "Error, Posicion invalida";
				}


			}
		}

		else if (opcion != 4 ){
			cout << "Opcion invalidad, Intente nuevamente";
		}
	} while (opcion != 4);

	cout << "\n Programa Finalizado. CHAUUU";
	return 0;
		
	}

