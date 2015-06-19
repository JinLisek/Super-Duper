#include <iostream>
#include "moving_object.hpp"

using namespace std;

int main(){
    Object *o = new MovingObject(4, 2, 5.1);

    cout << o->getX() << endl;
    cout << o->getY() << endl;

    cout << (static_cast<MovingObject*>(o))->getSpeedX() << endl;
    cout << (static_cast<MovingObject*>(o))->getSpeedY() << endl;

    delete o;

    return 0;
}
