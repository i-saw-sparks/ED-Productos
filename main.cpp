#include <iostream>
#include "Menu.h"
#include "Inventario.h"
#include "windows.h"

int main() {
    Menu menu;
    Inventario inv;
    bool ejecucion = true;


    do {
        std::cout << std::setprecision(2);
        switch (menu.ejecutar(std::cout, std::cin)) {
            case 1:
                inv.imprimirInventario(std::cout);
                break;

            case 2:
                inv.agregarLote(menu.ingresarProducto(std::cout, std::cin));
                break;

            case 3:
                inv.removerProducto(menu.removerProducto(std::cout, std::cin), menu.removerCantidad(std::cout, std::cin));
                break;
            case 4:
                ejecucion = false;
                break;
            default:
                std::cout<<"Opcion no valida";

        }

    } while (ejecucion);
    return 0;
}