#include <iostream>
using namespace std;

int main() {
    double lado1, lado2, lado3;

    // Pedimos las longitudes de los tres lados.
    cout << "Ingresa la longitud del primer lado: ";
    cin >> lado1;
    cout << "Ingresa la longitud del segundo lado: ";
    cin >> lado2;
    cout << "Ingresa la longitud del tercer lado: ";
    cin >> lado3;

    // Primero validamos que cada lado tenga una longitud positiva.
    if (lado1 <= 0.0 || lado2 <= 0.0 || lado3 <= 0.0) {
        cout << "No forman un triangulo: todos los lados deben ser positivos.\n";
        return 0;
    }

    // La suma de cualquier par debe superar el lado restante.
    if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 ||
        lado2 + lado3 <= lado1) {
        cout << "Los lados no forman un triangulo.\n";
        return 0;
    }

    // Sumamos los lados para obtener el perimetro.
    double perimetro = lado1 + lado2 + lado3;
    cout << "Perimetro: " << perimetro << "\n";

    // Comparamos los lados para clasificar el triangulo.
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "Tipo: equilatero.\n";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "Tipo: isosceles.\n";
    } else {
        cout << "Tipo: escaleno.\n";
    }

    return 0;
}
