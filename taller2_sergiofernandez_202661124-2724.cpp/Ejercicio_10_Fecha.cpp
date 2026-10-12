#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;

    // Pedimos los tres datos de la fecha.
    cout << "Ingresa el dia, mes y anio: ";
    cin >> dia >> mes >> anio;

    if (anio <= 0) {
        cout << "Fecha no valida: el anio debe ser positivo.\n";
        return 0;
    }

    // El switch asigna la cantidad de dias segun el mes.
    int diasDelMes = 0;

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            diasDelMes = 31;
            break;
        case 4: case 6: case 9: case 11:
            diasDelMes = 30;
            break;
        case 2:
            // Febrero tiene 29 dias cuando el anio es bisiesto.
            if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
                diasDelMes = 29;
            } else {
                diasDelMes = 28;
            }
            break;
        default:
            cout << "Fecha no valida: el mes debe estar entre 1 y 12.\n";
            return 0;
    }

    // Validamos el dia usando el maximo que corresponde al mes.
    if (dia < 1 || dia > diasDelMes) {
        cout << "Fecha no valida: el dia no corresponde a ese mes.\n";
    } else {
        cout << "La fecha es valida. El mes tiene " << diasDelMes << " dias.\n";
    }

    return 0;
}
