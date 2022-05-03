//Alumno: Gerald Pachari Millio

#include <iostream>
using namespace std;
void horaFormat(int, int, int);

int main()
{
    int h, m, i;
    char s;
    cout << "Ingrese la hora: ";
    cin >> h >> s >> m;
    cout << "Ingrese incremento en minutos: ";
    cin >> i;

    horaFormat(h, m, i);
    return 0;
}

void horaFormat(int h, int m, int x)
{
    if (x >= 60)
    {
        h += x / 60;
        m += x % 60;
    }
    else
        m += x;
    if (m >= 60)
    {
        m -= 60;
        h += 1;
    }
    string suf;
    if (h > 12) {
        h -= 12;
        suf = " PM\n";
    }
    else
    {
        if (h==12)
        {
            suf = " PM\n";
        }
        else
        {
            suf = " AM\n";
        }
    }

    if (m<10)
    {
        cout << "\n" << h << ":0"<<m << suf;
    }
    else
    {
        cout << "\n" << h << ":" << m << suf;
    }
}



