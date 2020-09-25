//
// Created by manie on 25/09/2020.
//

#ifndef ACTIVIDAD2_FECHA_H
#define ACTIVIDAD2_FECHA_H

#include <string>

class Fecha {
private:
    short dia;
    short mes;
    int anio;
public:
    Fecha(short dia, short mes, int anio);
    Fecha(const Fecha& fecha);
    Fecha();

    short getDia() const;
    short getMes() const;
    int getAnio() const;
    void setDia(short dia);
    void setMes(short mes);
    void setAnio(int anio);

    std::string toString() const;

    bool operator==(const Fecha &rhs) const;
    bool operator!=(const Fecha &rhs) const;
    bool operator<(const Fecha &rhs) const;
    bool operator>(const Fecha &rhs) const;
    bool operator<=(const Fecha &rhs) const;
    bool operator>=(const Fecha &rhs) const;
};


#endif //ACTIVIDAD2_FECHA_H
