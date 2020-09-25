//
// Created by manie on 25/09/2020.
//

#include "Menu.h"

int Menu::ejecutar(std::ostream &os, std::istream &is) const {
    int opcion = 0;
    bool valido = false;

    imprimirEncabezado(os);
    os<<"Seleccione una opcion:"<<std::endl
    <<"1 - Ver inventario"<<std::endl
    <<"2 - Ingresar nuevo lote"<<std::endl
    <<"3 - Retirar productos"<<std::endl;

    do {
        is >> opcion;
        if(opcion >= 1 && opcion <=3)
            valido = true;
        else
            os<<std::endl<<"Opcion no valida, vuelve a ingresa un valor (1 - 3)"<<std::endl;
    }while(!valido);
    return 0;
}

void Menu::imprimirEncabezado(std::ostream& os) const {
    os << "Sistema de gestion de inventarios"<<std::endl<<std::endl;
    return;
}

Menu::Menu(){}