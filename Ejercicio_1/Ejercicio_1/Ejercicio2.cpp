// Ejercicio 2: Pedir 5 notas por teclado y que al final saque el proemdio
//y me muestre el resutaldo

#include <iostream>

using namespace std;
  
int main2() {

	double nota1, nota2, nota3, nota4, nota5;
	double suma, promedio;

	cout << "==========Calculadora de promedio de notas " << endl << endl;

	cout << "Ingrese la primera nota 1: ";
	cin >> nota1;
	cout << "Ingrese la primera nota 2: ";
	cin >> nota2;
	cout << "Ingrese la primera nota 3: ";
	cin >> nota3;
	cout << "Ingrese la primera nota 4: ";
	cin >> nota4;
	cout << "Ingrese la primera nota 5: ";
	cin >> nota5;

	suma = nota1 + nota2 + nota3 + nota4 + nota5;
	promedio = suma / 5;

	cout << "La suma total de todas las notas es: " << suma << endl;
	cout << "El prodio final de las notas es : " << promedio << endl;
	 
	if (promedio >= 61.0) {
		cout << "El estudiante APROBO" << endl;
	}
	else {
		cout << "El estudiante REPROBO" << endl;
	}
	return 0;
}
