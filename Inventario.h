//
// Created by manie on 25/09/2020.
//

#ifndef ACTIVIDAD2_INVENTARIO_H
#define ACTIVIDAD2_INVENTARIO_H

#include <vector>
#include <array>
#include <ostream>
#include <iostream>
#include "Producto.h"

class Inventario {
private:
    std::vector<Producto> listaProds;
public:
    Inventario();
    Inventario(const Inventario&);
    Inventario(const std::vector<Producto> &inventario);

    void agregarLote(Producto);
    void removerProducto(Producto);
    void removerProducto(std::array<char, 13>&);
    void imprimirInventario(std::ostream&) const;

    const std::vector<Producto> &getListaProds() const;

    void setListaProds(const std::vector<Producto> &inventario);
};


#endif //ACTIVIDAD2_INVENTARIO_H
