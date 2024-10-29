#include "Menu.h"
#include "Map.h"
#include <iostream>

using namespace std;

void displayMenu() {
    int opt;
    do {
        cout << "---- MENU ----" << endl;
        cout << "1. Mostrar mapa" << endl;
        cout << "2. Agregar rutas turísticas" << endl;
        cout << "3. Editar rutas turísticas" << endl;
        cout << "4. Guardar rutas turísticas" << endl;
        cout << "5. Cargar rutas turísticas" << endl;
        cout << "6. Salir" << endl;
        cout << "Escoge una opción: ";
        cin >> opt;

        switch (opt) {
        case 1:
            showMap();
            break;
        case 2:
            
            break;
        case 3:
            editRoutesMenu(); 
            
            break;
        case 5:
            
            break;
        case 6:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "*** Esta opción no está habilitada ***" << endl;
        }
    } while (opt != 6);
}

void editRoutesMenu() {
    int editOpt;
    do {
        cout << "---- EDITAR RUTAS TURÍSTICAS ----" << endl;
        cout << "1. Cambiar color de un punto turístico" << endl;
        cout << "2. Borrar punto turístico" << endl;
        cout << "3. Borrar ruta completa" << endl;
        cout << "4. Volver al menú principal" << endl;
        cout << "Escoge una opción: ";
        cin >> editOpt;

        switch (editOpt) {
        case 1:
            
            cout << "Selecciona un punto turístico para cambiar su color..." << endl;
            break;
        case 2:
           
            cout << "Selecciona un punto turístico para borrar..." << endl;
            break;
        case 3:
           
            cout << "Selecciona una ruta completa para borrar..." << endl;
            break;
        case 4:
            cout << "Volviendo al menú principal..." << endl;
            break;
        default:
            cout << "*** Esta opción no está habilitada ***" << endl;
        }
    } while (editOpt != 4);
}
