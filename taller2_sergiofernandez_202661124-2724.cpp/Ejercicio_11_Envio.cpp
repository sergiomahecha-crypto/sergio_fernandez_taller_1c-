#include <iostream>
using namespace std;

int main() {
    double peso, distancia;
    int zona;
    char fragil;

    // Pedimos los datos necesarios para cotizar el envio.
    cout << "Ingresa el peso en kilogramos: ";
    cin >> peso;
    cout << "Ingresa la distancia en kilometros: ";
    cin >> distancia;
    cout << "Ingresa la zona (1 nacional, 2 internacional): ";
    cin >> zona;
    cout << "El paquete es fragil? (S/N): ";
    cin >> fragil;

    // Revisamos cada condicion antes de hacer la cotizacion.
    if (peso <= 0.0 || distancia <= 0.0) {
        cout << "Error: el peso y la distancia deben ser positivos.\n";
        return 0;
    }
    if (peso > 30.0) {
        cout << "Error: el peso no puede superar 30 kg.\n";
        return 0;
    }
    if (zona != 1 && zona != 2) {
        cout << "Error: la zona debe ser 1 o 2.\n";
        return 0;
    }
    if (fragil != 'S' && fragil != 's' && fragil != 'N' && fragil != 'n') {
        cout << "Error: indica S o N para el paquete fragil.\n";
        return 0;
    }

    // Calculamos la tarifa base con el peso y la distancia.
    double tarifa = 8000.0 + 1200.0 * peso + 50.0 * distancia;

    if (zona == 2) {
        tarifa *= 1.5;
    }
    if (fragil == 'S' || fragil == 's') {
        tarifa *= 1.20;
    }

    cout << "Valor final a pagar: $" << tarifa << "\n";

    return 0;
}
