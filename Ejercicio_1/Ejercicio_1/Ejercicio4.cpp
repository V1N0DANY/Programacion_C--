/*
3 - .Escribe un programa que solicite una nota del 0 al 100. El programa debe verificar si la nota ingresada es válida y luego mostrar la condición académica del estudiante según la siguiente escala :
90 a 100 : Excelente
70 a 89 : Aprobado
51 a 69 : En recuperación
0 a 50 : Reprobado
*/

// comentario solo de una liena
#include <iostream>

using namespace std;

int main() {
	//Declaro variable nota
	int nota;
	//se lee por teclado y se almacena en la variable nota
	cout << "Ingrese la nota del estudiante (0 a 100)";
	cin >> nota;
	//Validacion de rango 
	if (nota < 0 || nota > 100) {
		cout << "Error, La nota ingresada no es valida" << endl;
	}
	else if (nota >= 90) {
		cout << "Estado : Excelente" << endl;
	}
	else if (nota >= 70) {
		cout << "Estado : Aprobado" << endl;
	}
	else if (nota >= 51) {
		cout << "Estado : En Recuperacion" << endl;
	}
	else {
		cout << "Estado : Reprobado" << endl;
	}
	return 0;

}