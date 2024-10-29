#include "Menu.h"
#include "Map.h"
#include <iostream>

using namespace std;

void displayMenu() {
    int opt;
    do {
        cout << "---- MENU ----" << endl;
        cout << "1. Mostrar mapa" << endl;
        cout << "2. Agregar rutas tur�sticas" << endl;
        cout << "3. Editar rutas tur�sticas" << endl;
        cout << "4. Guardar rutas tur�sticas" << endl;
        cout << "5. Cargar rutas tur�sticas" << endl;
        cout << "6. Salir" << endl;
        cout << "Escoge una opci�n: ";
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
            cout << "*** Esta opci�n no est� habilitada ***" << endl;
        }
    } while (opt != 6);
}

void editRoutesMenu() {
    int editOpt;
    do {
        cout << "---- EDITAR RUTAS TUR�STICAS ----" << endl;
        cout << "1. Cambiar color de un punto tur�stico" << endl;
        cout << "2. Borrar punto tur�stico" << endl;
        cout << "3. Borrar ruta completa" << endl;
        cout << "4. Volver al men� principal" << endl;
        cout << "Escoge una opci�n: ";
        cin >> editOpt;

        switch (editOpt) {
        case 1:
            
            cout << "Selecciona un punto tur�stico para cambiar su color..." << endl;
            break;
        case 2:
           
            cout << "Selecciona un punto tur�stico para borrar..." << endl;
            break;
        case 3:
           
            cout << "Selecciona una ruta completa para borrar..." << endl;
            break;
        case 4:
            cout << "Volviendo al men� principal..." << endl;
            break;
        default:
            cout << "*** Esta opci�n no est� habilitada ***" << endl;
        }
    } while (editOpt != 4);
}
