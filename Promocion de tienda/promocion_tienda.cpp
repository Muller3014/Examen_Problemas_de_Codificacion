//
// Created by gonza on 05/11/2024.
//
/*En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros.
 *Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total
 *que el cliente debe pagar bajo esta promoción.
*/

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
    if (precio1 <= precio2 && precio1 <= precio3) { // Si el precio 1 es menor o igual al precio 2 y 3
        totalPagar = precio2 + precio3;
    } else if (precio2 <= precio1 && precio2 <= precio3) { // Si el precio 2 es menor o igual al precio 1 y 3
        totalPagar = precio1 + precio3;
    } else { // Si el precio 3 es menor o igual al precio 1 y 2
        totalPagar = precio1 + precio2;
    }

    cout << "El total a pagar bajo la promocion es: " << totalPagar << endl;
}