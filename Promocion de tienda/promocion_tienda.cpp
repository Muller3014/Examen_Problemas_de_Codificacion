//
// Created by gonza on 05/11/2024.
//
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