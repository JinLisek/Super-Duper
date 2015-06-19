#include "moving_object.hpp"

MovingObject::MovingObject(int x, int y, double speedX, double speedY) : Object(x, y){
    this->speedX = speedX;
    this->speedY = speedY;
}
