#include <iostream>

using namespace std;


int main3() {

	int n1;
	int n2;
	int n3;
	cout << "Ingrese el numero 1:"; 
	cin >> n1;
	cout << "Ingrese el numero 2:";
	cin >> n2;
	cout << "Ingrese el numero 3:";
	cin >> n3;
	if (n1 == n2 && n2 == n3) {
		cout << "Los tres numeros son iguales" << endl;
	}
	else if (n1 >= n2 && n1 >= n3) {
		cout << "El numero mayor es :" << n1 << endl;
	}
	else if (n2 >= n1 && n2 >= n3) {
		cout << "El numero mayor es :" << n2 << endl;
	}
	else {
		cout << "El numero mayor es :" << n3 << endl;
	}
	return 0;
}