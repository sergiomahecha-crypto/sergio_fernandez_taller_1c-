#include <iostream>
using namespace std;

int main() {
    double saldo;

    // Leemos y validamos el saldo antes de mostrar el menu.
    cout << "Ingresa el saldo inicial: ";
    cin >> saldo;

    if (saldo < 0.0) {
        cout << "Error: el saldo inicial no puede ser negativo.\n";
        return 0;
    }

    // El cajero atendera una sola opcion.
    int opcion;
    cout << "\nMenu de una operacion\n";
    cout << "1. Consultar saldo\n";
    cout << "2. Retirar dinero\n";
    cout << "3. Consignar dinero\n";
    cout << "Elige una opcion: ";
    cin >> opcion;

    // switch permite ejecutar una sola opcion del menu.
    switch (opcion) {
        case 1:
            cout << "Saldo actual: $" << saldo << "\n";
            break;
        case 2: {
            // En un retiro, el monto debe ser positivo y no superar el saldo.
            double monto;
            cout << "Ingresa el monto a retirar: ";
            cin >> monto;

            if (monto <= 0.0) {
                cout << "Error: el monto debe ser positivo.\n";
            } else if (monto > saldo) {
                cout << "Error: el monto supera el saldo disponible.\n";
            } else {
                saldo -= monto;
                cout << "Retiro realizado. Saldo nuevo: $" << saldo << "\n";
            }
            break;
        }
        case 3: {
            // En una consignacion, el monto solo debe ser positivo.
            double monto;
            cout << "Ingresa el monto a consignar: ";
            cin >> monto;

            if (monto <= 0.0) {
                cout << "Error: el monto debe ser positivo.\n";
            } else {
                saldo += monto;
                cout << "Consignacion realizada. Saldo nuevo: $" << saldo << "\n";
            }
            break;
        }
        default:
            cout << "Error: la opcion no es valida.\n";
    }

    return 0;
}
