#include <iostream>
#include <string>
using namespace std;

int main() {
    double peso, estatura;

    // Pedimos peso y estatura para calcular el IMC.
    cout << "Ingresa el peso en kilogramos: ";
    cin >> peso;
    cout << "Ingresa la estatura en metros: ";
    cin >> estatura;

    // No se puede calcular el IMC con valores iguales o menores que cero.
    if (peso <= 0.0 || estatura <= 0.0) {
        cout << "Error: el peso y la estatura deben ser mayores que cero.\n";
        return 0;
    }

    // Aplicamos la formula peso dividido por estatura al cuadrado.
    double imc = peso / (estatura * estatura);

    // if y else if seleccionan la clasificacion correspondiente.
    string clasificacion;
    if (imc < 18.5) {
        clasificacion = "Bajo peso";
    } else if (imc < 25.0) {
        clasificacion = "Normal";
    } else if (imc < 30.0) {
        clasificacion = "Sobrepeso";
    } else {
        clasificacion = "Obesidad";
    }

    cout << "IMC: " << imc << "\n";
    cout << "Clasificacion: " << clasificacion << "\n";

    return 0;
}
