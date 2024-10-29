
#ifndef MAPROUTE_H
#define MAPROUTE_H

#include <string>
#include "MapPointList.h"
using namespace std;

class MapRoute {
private:
    string name;
    MapPointList mapPointList;
    MapRoute* nextPoint;
    MapRoute* prevPoint;

public:
    
    MapRoute();
    MapRoute(string namePoint);

    
    string getNamePoint() const;
    MapPointList& getPointList();
    MapRoute* getNextPoint() const;
    MapRoute* getPrevPoint() const;

    
    void setNamePoint(string name);
    void setMapPointList(const MapPointList& pointList);
    void setNextPoint(MapRoute* nextPoint);
    void setPrevPoint(MapRoute* prevPoint);
};

#endif