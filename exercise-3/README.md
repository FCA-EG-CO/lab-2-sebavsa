# Ejercicio de laboratorio 3 - Separación de dígitos

## Descripción

Escriba un programa que ingrese un número de cinco dígitos, divida el número en sus dígitos individuales e imprima los dígitos separados entre sí por tres espacios cada uno. [Sugerencia: use la división entera y el operador de módulo.] Por ejemplo, si el usuario ingresa 42339, el programa debe imprimir lo que se muestra en la salida de ejemplo.

```cmd
Introduzca un número entero de cinco dígitos: 42339
Dígitos separados: 4 2 3 3 9
```

## Contesta las siguientes preguntas

1. ¿Cuáles son los resultados de las siguientes expresiones?

   | Operación  | Resultado |
   | ---------- | --------- |
   | 24 / 5     |     División entera: 5×4=20, sobra 4 (el cociente es 4).      |
   | 18 % 3     |    18 es múltiplo exacto de 3.       |
   | 13 % 9     |      9×1=9; 13−9=4.     |
   | 13 / 2 % 2 |          Se asocia izq→der: (13/2)=6, luego 6%2=0. |

2. ¿Qué sucede cuando el usuario ingresa un número que tiene menos de cinco dígitos? ¿Por qué? ¿Cuál es la salida cuando se ingresa 1763?
Sin validación, las fórmulas siguen funcionando con división entera:

Para 1763:

1763/10000 = 0 (decenas de millar)

(1763/1000)%10 = 1

(1763/100)%10 = 7

(1763/10)%10 = 6

1763%10 = 3

Salida (si se imprimiera igual): 0 1 7 6 3.

¿Por qué? Porque al dividir por 10000 un número con 4 dígitos, el cociente es 0; la extracción de miles, centenas, etc., funciona pero deja un 0 al inicio.

Con validación (como en el programa de arriba), el programa detecta que no tiene cinco dígitos y muestra un mensaje de error en lugar de imprimir dígitos.
3. El programa que completó en este ejercicio de laboratorio ingresa un número con varios dígitos y separa los dígitos. Escribe un programa inverso, un programa que le pide al usuario tres números de un dígito y los combina en un solo número de tres dígitos.

## ✅ Resultado

(Añadir captura de pantalla del resultado de la ejecución)
