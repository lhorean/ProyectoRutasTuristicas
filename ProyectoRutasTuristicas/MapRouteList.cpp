#include "MapRouteList.h"
#include <iostream>

MapRouteList::MapRouteList() : head(nullptr) {}

void MapRouteList::insertRoute(std::string name) {
    MapRoute* newNode = new MapRoute(name);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        MapRoute* current = head;
        while (current->getNextPoint() != nullptr) {
            current = current->getNextPoint();
        }
        current->setNextPoint(newNode);
        newNode->setPrevPoint(current);
    }
}

MapRoute* MapRouteList::searchRoute(std::string name) {
    MapRoute* current = head;
    while (current != nullptr) {
        if (current->getNamePoint() == name) {
            return current;
        }
        current = current->getNextPoint();
    }
    return nullptr;
}

void MapRouteList::insertPointToRoute(std::string routeName) {
    MapRoute* current = searchRoute(routeName);
    if (current != nullptr) {
        std::string pointName;
        std::cout << "Nombre del punto: ";
        std::cin >> pointName;

        
        if (current->getPointList().nameExists(pointName)) {
            current->getPointList().insertMapPoint(pointName, 50, 100); //Es un ejemplo, debo implementar esta parte para que el punto se cree segun el clic izq de mouse
        }
        else {
            std::cout << "El nombre del punto ya existe en esta ruta." << std::endl;
        }
    }
    else {
        std::cout << "Ruta no encontrada." << std::endl;
    }
}

void MapRouteList::removeRoute(std::string name) {
    if (head == nullptr) return;

    if (head->getNamePoint() == name) {
        MapRoute* temp = head;
        head = head->getNextPoint();
        delete temp;
        return;
    }

    MapRoute* current = head->getNextPoint();
    while (current != nullptr) {
        if (current->getNamePoint() == name) {
            current->getPrevPoint()->setNextPoint(current->getNextPoint());
            if (current->getNextPoint() != nullptr) {
                current->getNextPoint()->setPrevPoint(current->getPrevPoint());
            }
            delete current;
            return;
        }
        current = current->getNextPoint();
    }
}

void MapRouteList::displayRoutes() {
    MapRoute* current = head;
    while (current != nullptr) {
        std::cout << current->getNamePoint() << ", ";
        current = current->getNextPoint();
    }
    std::cout << std::endl;
}