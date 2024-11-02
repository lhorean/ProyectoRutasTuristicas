#include "Menu.h"
#include "SubMenu.h"
#include "Map.h"
#include <iostream>

using namespace std;

void displayMenu() {
    int opt;
    do {
        cout << "---- MENU ----" << endl;
        cout << "1. Mostrar mapa" << endl;
        cout << "2. Agregar rutas turisticas" << endl;
        cout << "3. Editar rutas turisticas" << endl;
        cout << "4. Guardar rutas turisticas" << endl;
        cout << "5. Cargar rutas turisticas" << endl;
        cout << "6. Salir" << endl;
        cout << "Escoge una opcion: ";
        cin >> opt;

        switch (opt) {
        case 1:
            showMap();
            break;
        case 2:
            // Lógica 
            break;
        case 3: {
            SubMenu submenu;
            submenu.displaySubMenu(); 
            break;
        }
        case 4:
            // Lógica 
            break;
        case 5:
            // Lógica 
            break;
        case 6:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "*** Esta opcion no esta habilitada ***" << endl;
        }
    } while (opt != 6);
}
