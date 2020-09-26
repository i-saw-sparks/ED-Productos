//
// Created by manie on 25/09/2020.
//

#ifndef ACTIVIDAD2_PRODUCTO_H
#define ACTIVIDAD2_PRODUCTO_H

#include <array>
#include <string>
#include "Fecha.h"

class Producto {
private:
    Fecha fechaEntrada;
    std::array<char, 13> codigoBarras;
    std::string nombre;
    float peso, precioMayoreo, precioMenudeo;
    int existencia;

public:
    Producto(const Fecha &fechaEntrada, const std::array<char, 13> &codigoBarras, const std::string &nombre, float peso,
             float precioMayoreo, float precioMenudeo, int existencia);

    Producto();

    Producto(Producto &obj);

    const Fecha &getFechaEntrada() const;
    void setFechaEntrada(const Fecha &fechaEntrada);

    const std::array<char, 13> &getCodigoBarras() const;
    void setCodigoBarras(const std::array<char, 13> &codigoBarras);

    const std::string &getNombre() const;
    void setNombre(const std::string &nombre);

    float getPeso() const;
    void setPeso(float peso);

    float getPrecioMayoreo() const;
    void setPrecioMayoreo(float precioMayoreo);

    float getPrecioMenudeo() const;
    void setPrecioMenudeo(float precioMenudeo);

    int getExistencia() const;
    void setExistencia(int existencia);

    bool operator==(const Producto &rhs) const;
    bool operator!=(const Producto &rhs) const;
};


#endif //ACTIVIDAD2_PRODUCTO_H
