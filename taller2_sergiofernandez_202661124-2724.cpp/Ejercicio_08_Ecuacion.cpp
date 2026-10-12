#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    // Pedimos los tres coeficientes de la ecuacion.
    cout << "Ingresa los coeficientes a, b y c: ";
    cin >> a >> b >> c;

    // Si a y b son cero, no hay ecuacion lineal ni cuadratica.
    if (a == 0.0 && b == 0.0) {
        cout << "No es una ecuacion de primer ni de segundo grado.\n";
        return 0;
    }

    // Si a es cero, usamos la formula de la ecuacion lineal.
    if (a == 0.0) {
        double x = -c / b;
        cout << "Es una ecuacion lineal. x = " << x << "\n";
    } else {
        // Calculamos el discriminante para conocer el tipo de raices.
        double discriminante = b * b - 4.0 * a * c;
        cout << "Discriminante: " << discriminante << "\n";

        if (discriminante > 0.0) {
            // Mostramos la formula con los valores ingresados, sin calcular la raiz cuadrada.
            cout << "Hay dos raices reales, expresadas en forma simbolica:\n";
            cout << "x1 = (" << -b << " + raiz(" << discriminante << ")) / (" << 2.0 * a << ")\n";
            cout << "x2 = (" << -b << " - raiz(" << discriminante << ")) / (" << 2.0 * a << ")\n";
        } else if (discriminante == 0.0) {
            // Cuando el discriminante es cero, las dos raices coinciden.
            double raiz = -b / (2.0 * a);
            cout << "Una raiz real: x = " << raiz << "\n";
        } else {
            cout << "El discriminante es negativo; las raices son complejas.\n";
        }
    }

    return 0;
}
