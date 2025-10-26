#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Ingrese tres numeros distintos: ";
    if (!(std::cin >> a >> b >> c)) {
        std::cerr << "Entrada invalida.\n";
        return 1;
    }

    // Suponiendo que son distintos como indica el enunciado.
    // 1) Hallar maximo y minimo usando solo if
    int mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;

    int mn = a;
    if (b < mn) mn = b;
    if (c < mn) mn = c;

    // 2) El del medio es el que no es ni max ni min
    int medio;
    if (a != mx && a != mn)      medio = a;
    else if (b != mx && b != mn) medio = b;
    else                         medio = c;

    std::cout << "El numero del medio es: " << medio << "\n";
    return 0;
}
