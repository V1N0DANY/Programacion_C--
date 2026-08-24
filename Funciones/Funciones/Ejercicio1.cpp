#include <iostream>
using namespace std;

//Declaracion de funciones que calcula el area
// tipo de datos   //nombre de la funcion //parametros con tipo de datos
double area_triangulo(double base, double altura) {
	//procedimiento
	double area = base * altura;
	return area;
}
int main(){
	double mi_area = area_triangulo(40, 20);
	cout << "El area del triagnulo es: " << mi_area << endl;

	return 0;
}