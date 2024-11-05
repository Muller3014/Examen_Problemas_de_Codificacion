cmake_minimum_required(VERSION 3.29)
project(Octubre)

set(CMAKE_CXX_STANDARD 20)

add_executable(Octubre main.cpp
        "Tipo de numero/tipo_numero.cpp"
        "Tipo de numero/tipo_numero.h"
        "Dia de la semana/dia_semana.cpp"
        "Dia de la semana/dia_semana.h"
        "Cálculo de promedio de calificaciones/promedio_calificaciones.cpp"
        "Cálculo de promedio de calificaciones/promedio_calificaciones.h"
        "Promocion de tienda/promocion_tienda.cpp"
        "Promocion de tienda/promocion_tienda.h")
