#include <iostream>

int main() {
    int n;
    std::cout << "Introduzca un numero entero de cinco digitos: ";
    if (!(std::cin >> n)) {
        std::cout << "Entrada invalida.\n";
        return 1;
    }

    // Validación estricta: exactamente cinco dígitos positivos
    if (n < 10000 || n > 99999) {
        std::cout << "Error: el numero debe tener exactamente cinco digitos.\n";
        return 1;
    }

    // Extraccion por division y modulo
    int d1 = n / 10000;           // decenas de millar
    int d2 = (n / 1000) % 10;     // millares
    int d3 = (n / 100) % 10;      // centenas
    int d4 = (n / 10) % 10;       // decenas
    int d5 = n % 10;              // unidades

    std::cout << "Digitos separados: "
              << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << "\n";
    return 0;
}
