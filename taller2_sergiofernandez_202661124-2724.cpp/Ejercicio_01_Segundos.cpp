#include <iostream>
using namespace std;

int main() {
    int totalSegundos;

    // Pedimos el total de segundos por teclado.
    cout << "Ingresa la cantidad de segundos: ";
    cin >> totalSegundos;

    // Validamos el dato antes de convertirlo.
    if (totalSegundos < 0) {
        cout << "Error: la cantidad de segundos no puede ser negativa.\n";
        return 0;
    }

    // La division entera y el modulo separan horas, minutos y segundos.
    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;

    cout << totalSegundos << " segundos equivalen a "
         << horas << " hora(s), " << minutos << " minuto(s) y "
         << segundos << " segundo(s).\n";

    return 0;
}
