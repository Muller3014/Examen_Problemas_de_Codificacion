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
### Fuente GitHub Copilot


## Ejercicio 2: Día de la Semana
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 
```
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
```
### Fuente GitHub Copilot

# Ejercicio 3: Cálculo de Promedio de Calificaciones
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 
```
#include "promedio_calificaciones.h"
#include <iostream>
using namespace std;

void mostrarPromedioCalificaciones() {
    int calificacion;
    int suma = 0;
    cout << "\n============= PROMEDIO DE CALIFICACIONES =============" << endl;
    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese la calificacion del ejercicio " << i << ": ";
        cin >> calificacion;
        suma += calificacion;
    }
    cout << "El promedio de las calificaciones es: " << suma / 8.0 << endl;
}
```
### Fuente de GitHub Copilot


