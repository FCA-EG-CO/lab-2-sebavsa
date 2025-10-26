#include <iostream>

int main() {
    int c, d, u; // centenas, decenas, unidades
    std::cout << "Introduzca tres digitos separados por espacio (centenas decenas unidades): ";
    if (!(std::cin >> c >> d >> u)) {
        std::cout << "Entrada invalida.\n";
        return 1;
    }

    // Validacion: c debe ser 1..9 para que el resultado sea de tres cifras; d y u: 0..9
    if (c < 1 || c > 9 || d < 0 || d > 9 || u < 0 || u > 9) {
        std::cout << "Error: ingrese digitos validos (c:1-9, d:0-9, u:0-9).\n";
        return 1;
    }

    int numero = c * 100 + d * 10 + u;
    std::cout << "Numero combinado: " << numero << "\n";
    return 0;
}
