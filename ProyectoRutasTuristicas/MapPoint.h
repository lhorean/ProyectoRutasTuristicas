#ifndef MAPPOINT_H
#define MAPPOINT_H

#include <string>
using namespace std;

class MapPoint {
private:
    string namePoint;
    int x;
    int y;
    MapPoint* nextPoint;
    MapPoint* prevPoint;

public:
    
    MapPoint();
    MapPoint(string namePoint, int x, int y);

    string getNamePoint() const;
    int getX() const;
    int getY() const;
    MapPoint* getNextPoint() const;
    MapPoint* getPrevPoint() const;

    void setNamePoint(string namePoint);
    void setX(int x);
    void setY(int y);
    void setNextPoint(MapPoint* nextPoint);
    void setPrevPoint(MapPoint* prevPoint);
};

#endif 
