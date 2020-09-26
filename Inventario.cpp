//
// Created by manie on 25/09/2020.
//

#include "Inventario.h"

Inventario::Inventario() {}
Inventario::Inventario(const Inventario& obj):inventario(obj.inventario) {}
Inventario::Inventario(const std::vector<Producto> &inventario) : inventario(inventario) {}

const std::vector<Producto> &Inventario::getInventario() const {
    return inventario;
}

void Inventario::setInventario(const std::vector<Producto> &inventario) {
    Inventario::inventario = inventario;
}

void Inventario::agregarLote() {

}

void Inventario::removerProducto() {

}

void Inventario::imprimirInventario() const {

}


