/* Taller 1: registro de admisión de un paciente, cálculo del IMC y generación de una ficha médica. */

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

int main() {
    // Variables para almacenar la información del paciente
    std::string nombreCompleto, correoElectronico, numeroTelefono, direccion;
    int edad;
    char genero, estratoSocioeconomico;
    float pesoKg, alturaMetros, indiceMasaCorporal;
    bool tieneAlergias;

    // Solicitud de los datos del paciente
    std::cout << "=== Registro de admisión del paciente ===\n\n";

    std::cout << "Nombre completo: ";
    std::getline(std::cin, nombreCompleto);

    std::cout << "Edad en años: ";
    std::cin >> edad;

    std::cout << "Género (M = masculino, F = femenino, O = otro): ";
    std::cin >> genero;

    std::cout << "Peso en kilogramos (kg): ";
    std::cin >> pesoKg;

    std::cout << "Altura en metros (por ejemplo, 1.70): ";
    std::cin >> alturaMetros;

    std::cout << "Estrato socioeconómico (por ejemplo, 3): ";
    std::cin >> estratoSocioeconomico;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Dirección completa: ";
    std::getline(std::cin, direccion);

    std::cout << "Número de teléfono: ";
    std::cin >> numeroTelefono;

    std::cout << "Correo electrónico: ";
    std::cin >> correoElectronico;

    std::cout << "¿Tiene alergias conocidas? (1 = sí, 0 = no): ";
    std::cin >> tieneAlergias;

    // Cálculo del índice de masa corporal
    indiceMasaCorporal = pesoKg / (alturaMetros * alturaMetros);

    // Presentación de la ficha del paciente
    std::cout << "\n========== FICHA DEL PACIENTE ==========\n\n";
    std::cout << "Nombre completo: " << nombreCompleto << "\n";
    std::cout << "Edad: " << edad << " años\n";
    std::cout << "Género: " << genero << "\n";
    std::cout << "Peso: " << pesoKg << " kg\n";
    std::cout << "Altura: " << alturaMetros << " m\n";
    std::cout << "Estrato socioeconómico: " << estratoSocioeconomico << "\n";
    std::cout << "Dirección: " << direccion << "\n";
    std::cout << "Teléfono: " << numeroTelefono << "\n";
    std::cout << "Correo electrónico: " << correoElectronico << "\n";
    std::cout << "Alergias conocidas: " << (tieneAlergias ? "sí" : "no") << "\n\n";

    std::cout << "========== RESULTADO DEL IMC ==========\n";
    std::cout << "Índice de masa corporal: " << indiceMasaCorporal << "\n";

    if (indiceMasaCorporal < 18.5) {
        std::cout << "Clasificación: bajo peso\n";
    } else if (indiceMasaCorporal < 25.0) {
        std::cout << "Clasificación: peso normal\n";
    } else if (indiceMasaCorporal < 30.0) {
        std::cout << "Clasificación: sobrepeso\n";
    } else {
        std::cout << "Clasificación: obesidad\n";
    }

    return 0;
}