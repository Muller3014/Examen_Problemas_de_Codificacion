//
// Created by gonza on 05/11/2024.
//
/*Un estudiante ha completado un curso de programación avanzada en C++.
 *Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una
 *nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones
 *obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar
 *el promedio de las calificaciones. */
#include "promedio_calificaciones.h"
#include <iostream>
using namespace std;

void mostrarPromedioCalificaciones() {
    float calificacion;
    float suma = 0;
    cout << "\n============= PROMEDIO DE CALIFICACIONES =============" << endl;
    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese la calificacion del ejercicio " << i << ": ";
        cin >> calificacion;
        suma += calificacion;
    }
    cout << "El promedio de las calificaciones es: " << suma / 8.0 << endl;
}
