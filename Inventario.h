//
// Created by manie on 25/09/2020.
//

#ifndef ACTIVIDAD2_INVENTARIO_H
#define ACTIVIDAD2_INVENTARIO_H

#include <vector>
#include "Producto.h"

class Inventario {
private:
    std::vector<Producto> inventario;
public:
    Inventario();
    Inventario(const Inventario&);
    Inventario(const std::vector<Producto> &inventario);

    void agregarLote();
    void removerProducto();
    void imprimirInventario() const;

    const std::vector<Producto> &getInventario() const;

    void setInventario(const std::vector<Producto> &inventario);
};


#endif //ACTIVIDAD2_INVENTARIO_H
