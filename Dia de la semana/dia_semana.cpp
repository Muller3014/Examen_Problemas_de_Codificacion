//
// Created by gonza on 05/11/2024.
//
/*Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7.
 *El programa deberá imprimir el nombre del día de la semana correspondiente al número
 *ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). */
#include <iostream>
#include "dia_semana.h"
using namespace std;

void mostrarDiaSemana() {
    int numero;
    cout << "\n============= DIA DE LA SEMANA =============" << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "6. Sabado" << endl;
    cout << "7. Domingo" << endl;

    cout << "Ingrese un numero del 1 al 7:";
    cin >> numero;
    switch (numero) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Numero invalido" << endl;
    }
}