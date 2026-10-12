#include <iostream>
#include <string>
using namespace std;

int main() {
    double ingreso, deuda;
    int edad, historial;

    // Pedimos los datos para evaluar la capacidad de pago.
    cout << "Ingresa el ingreso mensual: ";
    cin >> ingreso;
    cout << "Ingresa la deuda mensual: ";
    cin >> deuda;
    cout << "Ingresa la edad: ";
    cin >> edad;
    cout << "Tiene historial crediticio? (1 si, 0 no): ";
    cin >> historial;

    // Validamos los datos antes de dividir o clasificar el riesgo.
    if (ingreso <= 0.0) {
        cout << "Error: el ingreso debe ser positivo.\n";
        return 0;
    }
    if (deuda < 0.0) {
        cout << "Error: la deuda no puede ser negativa.\n";
        return 0;
    }
    if (edad < 18 || edad > 100) {
        cout << "Error: la edad debe estar entre 18 y 100.\n";
        return 0;
    }
    if (historial != 0 && historial != 1) {
        cout << "Error: el historial debe ser 1 (si) o 0 (no).\n";
        return 0;
    }

    // Calculamos la proporcion de deuda y el dinero restante.
    double relacion = deuda / ingreso;
    double capacidadPago = ingreso - deuda;
    // Guardamos en texto la clasificacion del riesgo.
    string riesgo;

    // Aplicamos primero las condiciones de riesgo alto.
    if (relacion > 0.5 || capacidadPago < 0.0) {
        riesgo = "Alto";
    } else if (relacion <= 0.3 && edad >= 25 && historial == 1) {
        riesgo = "Bajo";
    } else {
        riesgo = "Medio";
    }

    cout << "Relacion deuda/ingreso: " << relacion << "\n";
    cout << "Capacidad de pago: $" << capacidadPago << "\n";
    cout << "Nivel de riesgo: " << riesgo << "\n";

    return 0;
}
