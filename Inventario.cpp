//
// Created by manie on 25/09/2020.
//

#include "Inventario.h"

Inventario::Inventario() {}

Inventario::Inventario(const Inventario &obj) : listaProds(obj.listaProds) {}

Inventario::Inventario(const std::vector<Producto> &inventario) : listaProds(inventario) {}

const std::vector<Producto> &Inventario::getListaProds() const {
    return listaProds;
}

void Inventario::setListaProds(const std::vector<Producto> &inventario) {
    Inventario::listaProds = inventario;
}

void Inventario::agregarLote(Producto prod) {
    for (auto &x : listaProds) {
        if (x.getCodigoBarras() == prod.getCodigoBarras()) {
            x.setExistencia(x.getExistencia() + prod.getExistencia());
            return;
        }
    }
    Producto in(prod);
    listaProds.push_back(in);
}

void Inventario::removerProducto(Producto prod, int cantidad) {
    for (int i = 0; i < listaProds.size(); ++i) {
        if (listaProds[i] == prod) {
            listaProds[i].setExistencia(listaProds[i].getExistencia() - cantidad);
            if(listaProds[i].getExistencia() == 0)
                listaProds.erase(listaProds.begin() + i);
            return;
        }
    }
}

void Inventario::removerProducto(std::array<char, 13> &codigo, int cantidad) {
    for (int i = 0; i < listaProds.size(); ++i) {
        if (listaProds[i].getCodigoBarras() == codigo) {
            listaProds[i].setExistencia(listaProds[i].getExistencia() - cantidad);
            if(listaProds[i].getExistencia() == 0)
                listaProds.erase(listaProds.begin() + i);
            return;
        }
    }
}

void Inventario::imprimirInventario(std::ostream &os) const {
    const int tab = 15;
    os << std::setw(tab) << "Codigo de barras  " << "Nombre     " << "   Peso    "  << "   Precio M "
       << "   Precio m " << "Existencia "
       << "Fecha de ingreso";

    for (int i = 0; i < listaProds.size(); ++i) {
        std::string str(listaProds[i].toString());
        os << std::endl<< str;
    }
    os<<std::endl;
}


