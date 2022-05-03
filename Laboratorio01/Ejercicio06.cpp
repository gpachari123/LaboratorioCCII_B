//Alumno: Gerald Pachari Millio

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numero;
    string binario = "";
    cout << "Ingrese numero: " << endl;
    cin >> numero;

    if (numero >0)
    {
        while (numero>0)
        {
            if (numero%2==0)
            {
                binario = "0" + binario;
            }
            else
            {
                binario = "1" + binario;
            }
            numero = (int)numero / 2;
        }
    }
    else if (numero == 0){
        binario = "0";
    }
    else {
        binario = "invalido";
    }

    cout << "Numero binario: " << binario;
    return 0;
}





