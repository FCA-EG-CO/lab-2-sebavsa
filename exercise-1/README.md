# Ejercicio de laboratorio 1: Suma, Promedio, Máximo y Mínimo

## Descripción

Escriba un programa que lea tres números enteros del teclado e imprima la suma, el promedio, el producto, el más pequeño y el más grande de estos números. El diálogo de la pantalla debería aparecer de la siguiente manera:

```cmd
Ingrese tres enteros diferentes: 13 27 14
La suma is 54
El promedio es 18
El producto es 4914
El más pequeño es 13
El más grande es 27
```

## Contesta las siguientes preguntas

1. Modifique su solución para usar tres declaraciones cin separadas en lugar de una. Escribe un mensaje separado para cada cin.

2. ¿Importa si se usa < o <= al hacer comparaciones para determinar el número entero más pequeño? ¿Cuál usaste y por qué?
Se usa < y no <= porque:

Con <, solo cambia la variable si realmente encuentra un número más pequeño.

Si usara <=, también cambiaría cuando fueran iguales, lo cual es innecesario y no aporta nada.

3. En el programa, probablemente usó una variable double o float para almacenar el promedio. Cambie el tipo de esa variable a entero. ¿El resultado es diferente de lo que observó anteriormente?
Sí, cambia.

Si promedio es float, ejemplo: (7 + 8 + 10) / 3 = 8.33

Si lo cambias a int:

int promedio = suma / 3;


El resultado sería 8 (porque se recorta el decimal, no redondea).
## ✅ Resultado

(Añadir captura de pantalla del resultado de la ejecución)
