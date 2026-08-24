//ESTRUCTURA DE DATOS 
#include <iostream> //Libreria permite salida e ingreso de datos 
#include <vector>   // Libreria para trabajar con listas y vectores
#include <string>   //Libreria para manejar texto

using namespace std; //permite omitir el std en cada salida de mensaje

int main3() {
    //DECLARANDO VECTOR Y VARIABLES 
    vector<string> lista;
    string productos;
    int opcion;

    //Bucle do-while ejecuta el codigo al menos una vez y se repite 
    do {
        //Imprimimos el menu de opciones
        cout << "\n-----MI lista de compras---------\n";
        cout << "1-. Agregar producto \n";
        cout << "2-. Eliminar por posicion \n";
        cout << "3-. Mostrar lista \n";
        cout << "4-. Salir \n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        //Opcion 1: Agregar
        if (opcion == 1) {
            cout << "Escriba el nombre del producto: ";
            cin >> productos;
            lista.push_back(productos);
            cout << "!Producto agregado correctamente!\n";
        }
        //Opcion 2: Eliminar
        else if (opcion == 2) {
            //Revisamos si la lista esta vacia 
            if (lista.empty()) { //para verificar si la lista esta vacia 
                cout << "No hay nada que borrar, lista vacia\n";
            }
            else {
                int pos;
                cout << "Ingrese la posicion a borrar (0 a " << lista.size() - 1 << "): ";
                cin >> pos;
                // Validacion: comprueba que la posicion este dentro del rango existente
                if (pos >= 0 && pos < lista.size()) {
                    //size es un metodo que te ayuda a ver el tamñaño del vector
                    // lista.begin() da un iterador al inicio; se le suma 'pos' para ir al elemento exacto
                    lista.erase(lista.begin() + pos);// Elimina el elemento en la posicion indicada
                    cout << "Producto eliminado con exito \n";
                }
                else {
                    // Mensaje de error si la posicion ingresada esta fuera de rango
                    cout << "Posicion invalida \n";
                }
            }
        }

        //Opcion 3: Mostrar
        else if (opcion == 3) {
            if (lista.empty()) {
                cout << "La lista esta vacia\n";
            }
            else {
                cout << "\n--Tus productos--\n";
                // Bucle for para recorrer el vector desde el indice 0 hasta lista.size() - 1
                for (size_t i = 0; i < lista.size(); i++) {
                    // Imprime la posicion (indice) junto con el valor guardado en dicha posicion
                    cout << i << ". " << lista[i] << "\n";
                }
            }
        }
        else if (opcion != 4) {
            cout << "Opcion no valida, intente de nuevo.\n";
        }

    } while (opcion != 4);

    cout << "Hasta luego" << endl;
    return 0;
}