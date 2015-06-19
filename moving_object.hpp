#pragma once

#include "object.hpp"

class MovingObject : public Object{
protected:
    double speedX;
    double speedY;

public:
    MovingObject(int = 0, int = 0, double = 0.0, double = 0.0);
    virtual ~MovingObject(){ cout << "Deleting Moving Object" << endl;};
    double getSpeedX(){ return speedX; }
    double getSpeedY(){ return speedY; }
};
