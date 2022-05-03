//Alumno: Gerald Pachari Millio

#include <iostream>
using namespace std;

int redondear(int, int);

int main()
{
    int x, y;
    char p;
    cout << "\nIngrese con decimal: ";
    cin >> x >> p >> y;
    cout << "El numero " << x << "." << y << " redondeado es: " << redondear(x, y) << '\n';
    return 0;
}

int redondear(int x, int y)
{
    int r=x;
    if (y>=5)
    {
        r++;
    }
    return r;
}




