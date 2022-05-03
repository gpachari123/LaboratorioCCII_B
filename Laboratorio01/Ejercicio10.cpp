//Alumno: Gerald Pachari Millio

#include <iostream>
#include<math.h>

using namespace std;
int main() {
    string contraseniaDigitada, contrasenia = "1234";
    cout << "Ingrese Contraseña: ";
    cin >> contraseniaDigitada;
    while (getline(std::cin, contraseniaDigitada)) {
        if (contrasenia == contraseniaDigitada) {
            cout << "Bien! La contraseña es correcta\n";
            return 0;  // Salir!
        }

        cout << "La contraseña es incorrecta\n";
        cout << "Ingrese Contraseña: ";
    }
    return 0;
}









