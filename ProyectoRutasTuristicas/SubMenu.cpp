#include <iostream>
#include "SubMenu.h"

using namespace std;

void SubMenu::displaySubMenu() {
    int editOpt;
    do {
        cout << "---- EDITAR RUTAS TURISTICAS ----" << endl;
        cout << "1. Cambiar color de un punto turistico" << endl;
        cout << "2. Borrar punto turistico" << endl;
        cout << "3. Borrar ruta completa" << endl;
        cout << "4. Volver al menu principal" << endl;
        cout << "Escoge una opcion: ";
        cin >> editOpt;

        switch (editOpt) {
        case 1:
            changePointColor();
            break;
        case 2:
            deletePoint();
            break;
        case 3:
            deleteRoute();
            break;
        case 4:
            cout << "Volviendo al menú principal..." << endl;
            break;
        default:
            cout << "*** Esta opción no está habilitada ***" << endl;
        }
    } while (editOpt != 4);
}

void SubMenu::changePointColor() {
    cout << "Selecciona un punto turístico para cambiar su color..." << endl;
    // Lógica 
}

void SubMenu::deletePoint() {
    cout << "Selecciona un punto turístico para borrar..." << endl;
    // Lógica 
}

void SubMenu::deleteRoute() {
    cout << "Selecciona una ruta completa para borrar..." << endl;
    // Lógica 
}
