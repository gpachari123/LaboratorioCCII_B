//Alumno: Gerald Pachari Millio

#include <iostream>
#include<math.h>

using namespace std;
int main() {
    string contraseniaDigitada, contrasenia = "1234";
    cout << "Ingrese Contrase�a: ";
    cin >> contraseniaDigitada;
    while (getline(std::cin, contraseniaDigitada)) {
        if (contrasenia == contraseniaDigitada) {
            cout << "Bien! La contrase�a es correcta\n";
            return 0;  // Salir!
        }

        cout << "La contrase�a es incorrecta\n";
        cout << "Ingrese Contrase�a: ";
    }
    return 0;
}









