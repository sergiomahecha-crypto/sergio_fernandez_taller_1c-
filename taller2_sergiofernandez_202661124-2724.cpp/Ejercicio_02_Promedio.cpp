#include <iostream>
#include <string>
using namespace std;

int main() {
    double nota1, nota2, nota3;

    // Pedimos las tres notas.
    cout << "Ingresa la primera nota (0.0 a 5.0): ";
    cin >> nota1;
    cout << "Ingresa la segunda nota (0.0 a 5.0): ";
    cin >> nota2;
    cout << "Ingresa la tercera nota (0.0 a 5.0): ";
    cin >> nota3;

    // Si alguna nota esta fuera del rango, detenemos el programa.
    if (nota1 < 0.0 || nota1 > 5.0 ||
        nota2 < 0.0 || nota2 > 5.0 ||
        nota3 < 0.0 || nota3 > 5.0) {
        cout << "Error: todas las notas deben estar entre 0.0 y 5.0.\n";
        return 0;
    }

    // Aplicamos el peso indicado para cada nota.
    double promedio = nota1 * 0.30 + nota2 * 0.30 + nota3 * 0.40;

    // if y else eligen el concepto segun el promedio.
    string concepto;
    if (promedio >= 4.5) {
        concepto = "Excelente";
    } else if (promedio >= 4.0) {
        concepto = "Bueno";
    } else if (promedio >= 3.0) {
        concepto = "Aceptable";
    } else {
        concepto = "Reprobado";
    }

    cout << "Promedio ponderado: " << promedio << "\n";
    cout << "Concepto: " << concepto << "\n";

    return 0;
}
