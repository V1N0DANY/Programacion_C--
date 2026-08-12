
// Inlucion de librerias : que permite usar para imprimir 
//codigo c++
#include <iostream>
//evita que en todo el codigo escribamos o terminemos con std
using namespace std;

// esto es la funcion principal o puente de entrada
//donde se incia cada programa
int main1() {

	//declaracion de variables con tipo de dato
	int numero1 = 15 ;
	int numero2 = 20 ;
	int suma;
	float numero3 = 20; //con un decimal
	double numero4 = 20.50; //con dos decimales
	char numero5 = 'da';

	//proceso o operacion aritmetica
	suma = numero1 + numero2;

	// salida de pantalla
	// print("El primero numero es"),numero1
	cout << "El primer numero es:" << numero1;
	cout << "El segundo numero es" << numero2;
	cout << "El resultado de la suma es " << suma;
	return 0;
}
