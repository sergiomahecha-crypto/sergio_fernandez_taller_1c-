#include <iostream>
using namespace std;

int main() {
    int año;

    // Pedimos el año y validamos que sea positivo.
    cout << "Ingresa un año: ";
    cin >> año;

    if (año <= 0) {
        cout << "Error: el año debe ser positivo.\n";
        return 0;
    }

    // Un año es bisiesto si cumple una de las dos reglas.
    if ((año % 4 == 0 && año % 100 != 0) || año % 400 == 0) {
        cout << año << " es bisiesto.\n";
    } else {
        cout << año << " no es bisiesto.\n";
    }

    return 0;
}
