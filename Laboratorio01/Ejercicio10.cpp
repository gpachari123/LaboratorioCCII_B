//Alumno: Gerald Pachari Millio

#include <iostream>
#include<math.h>

using namespace std;
int main() {
    string contraseniaDigitada, contrasenia = "1234";
    cout << "Ingrese Contraseņa: ";
    cin >> contraseniaDigitada;
    while (getline(std::cin, contraseniaDigitada)) {
        if (contrasenia == contraseniaDigitada) {
            cout << "Bien! La contraseņa es correcta\n";
            return 0;  // Salir!
        }

        cout << "La contraseņa es incorrecta\n";
        cout << "Ingrese Contraseņa: ";
    }
    return 0;
}









