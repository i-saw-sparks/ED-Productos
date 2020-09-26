#include <iostream>
#include "Menu.h"
#include "Inventario.h"
#include "windows.h"

int main() {
    Menu menu;
    Inventario inv;
    bool ejecucion = true;

    do {
        switch (menu.ejecutar(std::cout, std::cin)) {
            case 1:
                inv.imprimirInventario(std::cout);
                break;

            case 2:
                inv.agregarLote(menu.ingresarProducto(std::cout, std::cin));
                break;

            case 3:
                inv.removerProducto(menu.removerProducto(std::cout, std::cin));
                break;

            default:
                std::cout<<"Opcion no valida";

        }
        std::cout <<std::endl<<"Quieres seguir ejecutando el programa" << std::endl << "1- Si" << std::endl << "0 - No";
        std::cin >> ejecucion;
        //system("cls");
    } while (ejecucion);
    return 0;
}