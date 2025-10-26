# Ejercicio de laboratorio 2 – Múltiplos

## Descripción

Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]

```cmd
Ingrese dos enteros: 22 8
22 no es un múltiplo de 8
```

## Contesta las siguientes preguntas

1. ¿Se puede utilizar el operador de módulo con operandos no enteros? 
No. El operador % solo funciona con enteros. No se puede usar directamente con float o double
¿Se puede usar con números negativos?
Sí. Se puede usar con números negativos, aunque el resultado conserva el signo del primer operando.
 Supongamos que el usuario ha introducido los siguientes conjuntos de números. Para cada serie, ¿qué produce en la tercera columna? Si hay un error, explique por qué.

   | Entero 1 | Entero 2 | Expresión        | Salida |
   | -------- | -------- | ---------------- | ------ |
   | 73       | 22       | cout << 73 % 22; |73/22=3 →sobra 7    |
   | 0        | 100      | cout << 0 % 100; |0 entre cualquier número da 0  |
   | 100      | 0        | cout << 100 % 0; | No se puede dividir entre 0       |
   | -3       | 3        | cout << -3 % 3;  |      0  |
   | 9        | 4.5      | cout << 9 % 4.5; |Error de compilación no existe % para double; use std::fmod(9.0, 4.5)   |
   | 16       | 2        | cout << 16 % 2;  |      0  |

2. ¿Qué pasa si colocamos un punto y coma (;) después del final de la expresión de condición de una declaración if?
El ; termina la instrucción del if, por lo que el cuerpo del if es una instrucción nula. La siguiente sentencia (aunque esté entre llaves) se ejecuta siempre

3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]

## ✅ Resultado

(Añadir captura de pantalla del resultado de la ejecución)
