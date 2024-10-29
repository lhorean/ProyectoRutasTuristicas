#include "MapPointList.h"
#include <iostream>
using namespace std;


MapPointList::MapPointList() {
    this->head = nullptr;
}

void MapPointList::insertMapPoint(string namePoint, int x, int y) {
    MapPoint* newPoint = new MapPoint(namePoint, x, y);
    if (head == nullptr) {
        head = newPoint;
    }
    else {
        MapPoint* current = head;
        while (current->getNextPoint() != nullptr) {
            current = current->getNextPoint();
        }
        current->setNextPoint(newPoint);
        newPoint->setPrevPoint(current);
    }
}

bool MapPointList::nameExists(std::string namePoint) {
    MapPoint* current = head;
    while (current != nullptr) {
        if (current->getNamePoint() == namePoint) {
            return false;
        }
        current = current->getNextPoint();
    }
    return true;
}

void MapPointList::displayMapPoints() {
    MapPoint* current = head;
    while (current != nullptr) {
        cout << current->getNamePoint() << ", ";
        current = current->getNextPoint();
    }
    cout << endl; 
}