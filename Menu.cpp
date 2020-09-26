//
// Created by manie on 25/09/2020.
//

#include "Menu.h"

int Menu::ejecutar(std::ostream &os, std::istream &is) const {
    int opcion = 0;
    bool valido = false;

    imprimirEncabezado(os);
    os << "Seleccione una opcion:" << std::endl
       << "1 - Ver inventario" << std::endl
       << "2 - Ingresar nuevo lote" << std::endl
       << "3 - Retirar productos" << std::endl
       << "4 - Parar la ejecucion" << std::endl;

    do {
        is >> opcion;
        if (opcion >= 1 && opcion <= 3)
            valido = true;
        else
            os << std::endl << "Opcion no valida, vuelve a ingresa un valor (1 - 3)" << std::endl;
    } while (!valido);


    return opcion;
}

void Menu::imprimirEncabezado(std::ostream &os) const {
    os <<std::endl<< "Sistema de gestion de inventarios" << std::endl << std::endl;
    return;
}

Menu::Menu() {}

Producto Menu::ingresarProducto(std::ostream &os, std::istream &is) const {
    Producto prod;
    std::string strIn;
    float fltIn;
    int intIn;
    Fecha fechaIn;
    std::array<char, 13> arrIn;

    os << std::endl << "Ingrese el nombre del producto" << std::endl;
    std::getline(is >> std::ws, strIn);
    prod.setNombre(strIn);
    os << std::endl << "Ingrese el codigo de barras" << std::endl;
    for (int i = 0; i < 13; ++i) {
        is >> arrIn[i];
    }
    prod.setCodigoBarras(arrIn);
    os << std::endl << "Ingrese el peso del producto" << std::endl;
    is >> fltIn;
    prod.setPeso(fltIn);
    os << std::endl << "Ingrese el precio a Mayoreo del producto" << std::endl;
    is >> fltIn;
    prod.setPrecioMayoreo(fltIn);
    os << std::endl << "Ingrese el precio a Menudeo del producto" << std::endl;
    is >> fltIn;
    prod.setPrecioMenudeo(fltIn);
    os << std::endl << "Ingrese la existencia del producto" << std::endl;
    is >> intIn;
    prod.setExistencia(intIn);
    os << std::endl << "Ingrese el dia de ingreso" << std::endl;
    is >> intIn;
    fechaIn.setDia(intIn);
    os << std::endl << "Ingrese el mes de ingreso" << std::endl;
    is >> intIn;
    fechaIn.setMes(intIn);
    os << std::endl << "Ingrese el anio de ingreso" << std::endl;
    is >> intIn;
    fechaIn.setAnio(intIn);
    prod.setFechaEntrada(fechaIn);
    return prod;
}

Producto Menu::removerProducto(std::ostream &os, std::istream &is) const {
    Producto prod;
    std::array<char, 13> arrIn;
    os << std::endl << "Ingrese el codigo de barras del producto que desea borrar"<<std::endl;
    for (int i = 0; i < 13; ++i) {
        is >> arrIn[i];
    }
    prod.setCodigoBarras(arrIn);
    return prod;
}

