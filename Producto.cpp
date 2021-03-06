//
// Created by manie on 25/09/2020.
//

#include "Producto.h"

const Fecha &Producto::getFechaEntrada() const {
    return fechaEntrada;
}

void Producto::setFechaEntrada(const Fecha &fechaEntrada) {
    Producto::fechaEntrada = fechaEntrada;
}

const std::array<char, 13> &Producto::getCodigoBarras() const {
    return codigoBarras;
}

void Producto::setCodigoBarras(const std::array<char, 13> &codigoBarras) {
    Producto::codigoBarras = codigoBarras;
}

const std::string &Producto::getNombre() const {
    return nombre;
}

void Producto::setNombre(const std::string &nombre) {
    Producto::nombre = nombre;
}

float Producto::getPeso() const {
    return peso;
}

void Producto::setPeso(float peso) {
    Producto::peso = peso;
}

float Producto::getPrecioMayoreo() const {
    return precioMayoreo;
}

void Producto::setPrecioMayoreo(float precioMayoreo) {
    Producto::precioMayoreo = precioMayoreo;
}

float Producto::getPrecioMenudeo() const {
    return precioMenudeo;
}

void Producto::setPrecioMenudeo(float precioMenudeo) {
    Producto::precioMenudeo = precioMenudeo;
}

int Producto::getExistencia() const {
    return existencia;
}

void Producto::setExistencia(int existencia) {
    Producto::existencia = existencia;
}

bool Producto::operator==(const Producto &rhs) const {
    return codigoBarras == rhs.codigoBarras;
}

bool Producto::operator!=(const Producto &rhs) const {
    return !(rhs == *this);
}

Producto::Producto(const Fecha &fechaEntrada, const std::array<char, 13> &codigoBarras, const std::string &nombre,
                   float peso, float precioMayoreo, float precioMenudeo, int existencia) : fechaEntrada(fechaEntrada),
                                                                                           codigoBarras(codigoBarras),
                                                                                           nombre(nombre), peso(peso),
                                                                                           precioMayoreo(precioMayoreo),
                                                                                           precioMenudeo(precioMenudeo),
                                                                                           existencia(existencia) {}

Producto::Producto() {}

Producto::Producto(Producto const &obj) : fechaEntrada(obj.fechaEntrada),
                                    codigoBarras(obj.codigoBarras),
                                    nombre(obj.nombre), peso(obj.peso),
                                    precioMayoreo(obj.precioMayoreo),
                                    precioMenudeo(obj.precioMenudeo),
                                    existencia(obj.existencia) {}

std::string Producto::toString() const {
    std::string codigo(std::begin(codigoBarras), std::end(codigoBarras));
    return codigo + "  " + nombre + "  " + std::to_string(peso) + "  "
           + std::to_string(precioMayoreo) + "  " + std::to_string(precioMenudeo) + "  "
           + std::to_string(existencia) + "  " + fechaEntrada.toString();
}
