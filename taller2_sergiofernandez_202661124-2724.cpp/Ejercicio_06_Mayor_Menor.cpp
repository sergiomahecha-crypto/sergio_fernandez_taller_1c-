#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3;

    // Leemos los tres numeros en una sola instruccion.
    cout << "Ingresa tres numeros enteros: ";
    cin >> numero1 >> numero2 >> numero3;

    // Usamos el primer numero como valor inicial para mayor y menor.
    int mayor = numero1;
    int menor = numero1;

    // Comparamos cada numero para actualizar el mayor y el menor.
    if (numero2 > mayor) {
        mayor = numero2;
    }
    if (numero3 > mayor) {
        mayor = numero3;
    }
    if (numero2 < menor) {
        menor = numero2;
    }
    if (numero3 < menor) {
        menor = numero3;
    }

    cout << "Mayor: " << mayor << "\n";
    cout << "Menor: " << menor << "\n";

    // Revisamos primero si todos son iguales, luego si hay dos iguales.
    if (numero1 == numero2 && numero2 == numero3) {
        cout << "Los tres numeros son iguales.\n";
    } else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
        cout << "Hay dos iguales y uno distinto.\n";
    } else {
        cout << "Los tres numeros son distintos.\n";
    }

    return 0;
}
