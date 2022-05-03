//Alumno: Gerald Pachari Millio

#include <iostream>
#include<math.h>

using namespace std;
int main() {
	float numero,c=0,suma=0;

	cout << "Ingrese un numero (Ingrese 0 para culminar): " << endl; cin >> numero;
	while (numero!=0)
	{
		suma += numero;
		c++;
		cout << "Ingrese un numero (Ingrese 0 para culminar):" << endl; cin >> numero;
	}
	cout << "La media es: " << suma/c << endl;
    return 0;
}







