//Alumno: Gerald Pachari Millio

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Digite 2 numeros: ";
    cin >> n1 >> n2;
    if (n1%n2==0)
    {
        cout << "El primer numero es divisible por el segundo" << endl;
        return 0;
    }
    if (n2%n1==0)
    {
        cout << "El segundo numero es divisible por el primero" << endl;
        return 0;
    }
    cout << "No son divisbles" << endl;
    return 0;
}






