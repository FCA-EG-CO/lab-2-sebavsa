#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero % 2 == 0)
        cout << numero << " es un numero PAR" << endl;
    else
        cout << numero << " es un numero IMPAR" << endl;

    return 0;
}
