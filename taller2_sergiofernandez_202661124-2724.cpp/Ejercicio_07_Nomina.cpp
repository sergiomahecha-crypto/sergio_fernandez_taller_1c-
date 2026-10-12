#include <iostream>
using namespace std;

int main() {
    double valorHora, horasTrabajadas;

    // Pedimos el valor de la hora y el total trabajado.
    cout << "Ingresa el valor de la hora: ";
    cin >> valorHora;
    cout << "Ingresa las horas trabajadas: ";
    cin >> horasTrabajadas;

    // Validamos antes de calcular cualquier pago.
    if (valorHora <= 0.0 || horasTrabajadas < 0.0) {
        cout << "Error: el valor de la hora debe ser positivo y las horas no pueden ser negativas.\n";
        return 0;
    }

    // Separamos las horas segun los tres rangos de pago.
    double horasNormales;
    double horasExtra;
    double horasDobles;

    if (horasTrabajadas <= 40.0) {
        horasNormales = horasTrabajadas;
        horasExtra = 0.0;
        horasDobles = 0.0;
    } else if (horasTrabajadas <= 48.0) {
        horasNormales = 40.0;
        horasExtra = horasTrabajadas - 40.0;
        horasDobles = 0.0;
    } else {
        horasNormales = 40.0;
        horasExtra = 8.0;
        horasDobles = horasTrabajadas - 48.0;
    }

    // Sumamos los pagos normal, extra y doble para obtener el bruto.
    double salarioBruto = horasNormales * valorHora +
                          horasExtra * valorHora * 1.5 +
                          horasDobles * valorHora * 2.0;
    // El ternario selecciona el descuento segun el salario bruto.
    double porcentajeDescuento = salarioBruto > 2000000.0 ? 0.08 : 0.04;
    double descuento = salarioBruto * porcentajeDescuento;
    double salarioNeto = salarioBruto - descuento;

    cout << "Horas normales: " << horasNormales << "\n";
    cout << "Horas extra (1.5x): " << horasExtra << "\n";
    cout << "Horas dobles (2x): " << horasDobles << "\n";
    cout << "Salario bruto: $" << salarioBruto << "\n";
    cout << "Descuento (" << porcentajeDescuento * 100.0 << "%): $" << descuento << "\n";
    cout << "Salario neto: $" << salarioNeto << "\n";

    return 0;
}
