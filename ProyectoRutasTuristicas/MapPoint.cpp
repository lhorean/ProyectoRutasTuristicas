#include "MapPoint.h"
using namespace std;

MapPoint::MapPoint() : namePoint(""), x(0), y(0), nextPoint(nullptr), prevPoint(nullptr) 
{

}

MapPoint::MapPoint(string namePoint, int x, int y) : namePoint(namePoint), x(x), y(y), nextPoint(nullptr), prevPoint(nullptr) 
{ 

}


string MapPoint::getNamePoint() const 
{

    return namePoint;

}

int MapPoint::getX() const 
{

    return x;

}

int MapPoint::getY() const 
{

    return y;

}

MapPoint* MapPoint::getNextPoint() const 
{

    return nextPoint;

}

MapPoint* MapPoint::getPrevPoint() const 
{

    return prevPoint;

}


void MapPoint::setNamePoint(string namePoint) 
{

    this->namePoint = namePoint;

}

void MapPoint::setX(int x) 
{

    this->x = x;

}

void MapPoint::setY(int y)
{

    this->y = y;

}

void MapPoint::setNextPoint(MapPoint* nextPoint) 
{

    this->nextPoint = nextPoint;

}

void MapPoint::setPrevPoint(MapPoint* prevPoint) 
{

    this->prevPoint = prevPoint;

}