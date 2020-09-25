//
// Created by manie on 25/09/2020.
//

#include "Fecha.h"

Fecha::Fecha(short dia, short mes, int anio) : dia(dia), mes(mes), anio(anio) {}

Fecha::Fecha() {}

Fecha::Fecha(const Fecha& fecha): dia(fecha.dia), mes(fecha.mes), anio(fecha.anio) {}

short Fecha::getDia() const {
    return dia;
}

short Fecha::getMes() const {
    return mes;
}

int Fecha::getAnio() const {
    return anio;
}

void Fecha::setDia(short dia) {
    Fecha::dia = dia;
}

void Fecha::setMes(short mes) {
    Fecha::mes = mes;
}

void Fecha::setAnio(int anio) {
    Fecha::anio = anio;
}

bool Fecha::operator==(const Fecha &rhs) const {
    return dia == rhs.dia &&
           mes == rhs.mes &&
           anio == rhs.anio;
}

bool Fecha::operator!=(const Fecha &rhs) const {
    return !(rhs == *this);
}

bool Fecha::operator<(const Fecha &rhs) const {
    if(anio > rhs.anio)
        return false;
    else if(mes > rhs.mes)
        return false;
    else if(dia > rhs.dia)
        return false;
    return true;
}

bool Fecha::operator>(const Fecha &rhs) const {
    return rhs < *this;
}

bool Fecha::operator<=(const Fecha &rhs) const {
    return (rhs < *this)||(rhs == *this);
}

bool Fecha::operator>=(const Fecha &rhs) const {
    return (rhs > *this)||(rhs == *this);;
}

std::string Fecha::toString() const {
    return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(anio) + "/";
}
