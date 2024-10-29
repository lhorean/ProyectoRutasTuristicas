#include "MapRoute.h"

MapRoute::MapRoute() : name(""), nextPoint(nullptr), prevPoint(nullptr) {}


MapRoute::MapRoute(string namePoint) : name(namePoint), nextPoint(nullptr), prevPoint(nullptr) {}


string MapRoute::getNamePoint() const {
    return this->name;
}

MapPointList& MapRoute::getPointList() {
    return this->mapPointList;
}

MapRoute* MapRoute::getNextPoint() const {
    return this->nextPoint;
}

MapRoute* MapRoute::getPrevPoint() const {
    return this->prevPoint;
}

void MapRoute::setNamePoint(string name) {
    this->name = name;
}

void MapRoute::setMapPointList(const MapPointList& pointList) {
    this->mapPointList = pointList;
}

void MapRoute::setNextPoint(MapRoute* nextPoint) {
    this->nextPoint = nextPoint;
}

void MapRoute::setPrevPoint(MapRoute* prevPoint) {
    this->prevPoint = prevPoint;
}