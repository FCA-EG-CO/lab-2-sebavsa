#include <iostream> 
using namespace std;
int main() {
int numeros[5]; // declaramos el arreglo 
int suma=0;
int producto=1;
float promedio;
    cout<<"ingresa tres numeros enteros diferentes\n";
    for (int i=0; i < 3; i++ ) {
        cout << "Número " << i + 1 << ": ";
        cin >>numeros[i];
        suma += numeros[i]; 
        producto *= numeros [i];
    } 
    int menor = numeros[0];
    int mayor = numeros[0];  // asumimos que el primero es el mayor
    promedio= suma/3.0;
    for (int i = 1; i < 3; i++) {  // iniciamos desde 1 porque 0 ya lo tomamos
    if (numeros[i] > mayor) {
        mayor = numeros[i];   // si encontramos uno más grande, lo guardamos
    }
}

    for (int i = 1; i < 3; i++) {
    if (numeros[i] < menor) {
        menor = numeros[i];
    }
}

    cout<<"la suma es:" <<suma <<endl;
    cout<<"el promedio es:" <<promedio << endl;
    cout<<"el producto es:" <<producto << endl;
    cout << "El numero mas grande es: " << mayor << endl;
    cout << "El numero mas pequeño es: " << menor << endl;

    return 0;
}