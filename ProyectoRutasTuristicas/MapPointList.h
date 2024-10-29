#ifndef MAPPOINTLIST_H
#define MAPPOINTLIST_H

#include "MapPoint.h" 

#include <string>
#include <iostream>

class MapPointList {

private:

    MapPoint* head;

public:
    
    MapPointList();

    void insertMapPoint(string namePoint, int x, int y);

    bool nameExists(string namePoint);

    void displayMapPoints();

};

#endif 