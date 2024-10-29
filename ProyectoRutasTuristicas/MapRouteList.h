#ifndef MAPROUTELIST_H
#define MAPROUTELIST_H

using namespace std;
#include <string>
#include "MapRoute.h"

class MapRouteList {
private:
    MapRoute* head;

public:
    MapRouteList();

    void insertRoute(std::string name);
    MapRoute* searchRoute(std::string name);
    void insertPointToRoute(std::string routeName);
    void removeRoute(std::string name);
    void displayRoutes();
};

#endif