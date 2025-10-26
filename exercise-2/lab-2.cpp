#include <iostream>

int main() {
    int a, b;
    std::cout << "Ingrese dos enteros: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Entrada invalida.\n";
        return 1;
    }

    if (b == 0) {
        std::cout << "No se puede determinar: modulo/division por cero.\n";
        return 0;
    }

    if (a % b == 0) {
        std::cout << a << " es un multiplo de " << b << "\n";
    } else {
        std::cout << a << " no es un multiplo de " << b << "\n";
    }
    return 0;
}
