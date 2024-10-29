#include "MapPoint.h"

using namespace std;

MapPoint::MapPoint(string namePoint, int x, int y) : namePoint(namePoint), x(x), y(y), nextPoint(nullptr), prevPoint(nullptr) {}

string MapPoint::getNamePoint() const {
    return namePoint;
}

MapPoint* MapPoint::getNextPoint() const {
    return nextPoint;
}

MapPoint* MapPoint::getPrevPoint() const {
    return prevPoint;
}

void MapPoint::setNextPoint(MapPoint* nextPoint) {
    this->nextPoint = nextPoint;
}

void MapPoint::setPrevPoint(MapPoint* prevPoint) {
    this->prevPoint = prevPoint;
}