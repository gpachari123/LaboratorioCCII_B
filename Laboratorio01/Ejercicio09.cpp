//Alumno: Gerald Pachari Millio

#include <iostream>
#include<math.h>

using namespace std;
int main() {
	int numero,suma=0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Ingrese un numero: " << endl; cin >> numero;
		if (numero<0)
		{
			suma += numero;
		}
	}
	cout << "La suma de negativos es: " << suma << endl;
    return 0;
}








