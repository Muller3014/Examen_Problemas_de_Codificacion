# Parte 2: Problemas de Codificación - Gonzalo Müller

### Link al repositorio: https://github.com/Muller3014/Examen_Problemas_de_Codificacion.git

-----------------------------------

## Ejercicios Planteados

### Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 

### Ejercicio 2: Día de la Semana
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 

### Ejercicio 3: Cálculo de Promedio de Calificaciones
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 

### Ejercicio 4: Promoción de "3 por 2" en Tienda
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.

-----------------------------------

# Ejercicios resueltos

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
[tipo_numero](Octubre/Promocion de tienda/tipo_numero)

#### Fuente GitHub Copilot


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
#### Fuente GitHub Copilot

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
#### Fuente de GitHub Copilot

# Ejercicio 4: Promoción de "3 por 2" en Tienda
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.

```
#include <iostream>
#include "promocion_tienda.h"
using namespace std;

void mostrarPromocionTienda() {
    double precio1, precio2, precio3;
    cout << "\n============= PROMOCION DE TIENDA =============" << endl;
    cout << "Ingrese el precio del primer articulo: ";
    cin >> precio1;
    cout << "Ingrese el precio del segundo articulo: ";
    cin >> precio2;
    cout << "Ingrese el precio del tercer articulo: ";
    cin >> precio3;

    double totalPagar;
    if (precio1 <= precio2 && precio1 <= precio3) {
        totalPagar = precio2 + precio3;
    } else if (precio2 <= precio1 && precio2 <= precio3) {
        totalPagar = precio1 + precio3;
    } else {
        totalPagar = precio1 + precio2;
    }

    cout << "El total a pagar bajo la promocion es: " << totalPagar << endl;
}
```
#### Fuente de GitHub Copilot
