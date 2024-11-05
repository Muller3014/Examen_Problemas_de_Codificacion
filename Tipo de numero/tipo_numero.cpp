//
// Created by gonza on 05/11/2024.
//
/*Escribe un programa en C++ que solicite al usuario ingresar un número entero.
 *El programa deberá analizar el número ingresado e imprimir en pantalla si el número
 *es "positivo", "negativo" o "cero". */

#include <iostream>
#include "tipo_numero.h"
using namespace std;

void mostrarTipoNumero() {
    int numero;
    cout << "============= Identificacion de Numero Positivo, Negativo o Cero =============" << endl;
    cout << "Ingrese un numero:";
    cin >> numero;
    if (numero > 0) {  // Si el numero es mayor a 0
        cout << "El numero es positivo" << endl;
    } else if (numero < 0) { // Si el numero es menor a 0
        cout << "El numero es negativo" << endl;
    } else { // Si el numero es igual a 0
        cout << "El numero es cero" << endl;
    }
}