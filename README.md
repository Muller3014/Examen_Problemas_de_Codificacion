# Parte 2: Problemas de Codificación - Gonzalo Müller

### Link al repositorio: https://github.com/Muller3014/Examen_Problemas_de_Codificacion.git

## Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
Escribe un programa en C++ que solicite al usuario ingresar un número entero. 
El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero".
Problema resuelto: 
```
#include <iostream>
#include "tipo_numero.h"
using namespace std;

void mostrarTipoNumero() {
    int numero;
    cout << "============= Identificacion de Numero Positivo, Negativo o Cero =============" << endl;
    cout << "Ingrese un numero:";
    cin >> numero;
    if (numero > 0) {
        cout << "El numero es positivo" << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo" << endl;
    } else {
        cout << "El numero es cero" << endl;
    }
}
```
### Fuente Github Copilot
