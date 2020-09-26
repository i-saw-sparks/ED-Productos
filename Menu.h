//
// Created by manie on 25/09/2020.
//

#ifndef ACTIVIDAD2_MENU_H
#define ACTIVIDAD2_MENU_H

#include <ostream>
#include <istream>
#include <iostream>
#include "Producto.h"

class Menu {
public:
    void imprimirEncabezado(std::ostream&) const;
    int ejecutar(std::ostream&, std::istream&) const;
    Producto ingresarProducto(std::ostream&, std::istream&) const;
    Producto removerProducto(std::ostream&, std::istream&) const;
    Menu();
};


#endif //ACTIVIDAD2_MENU_H
