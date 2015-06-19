#pragma once

#include <iostream>

using namespace std;

class Object{
protected:
    int x;
    int y;

public:
    Object(int = 0, int = 0);
    virtual ~Object(){ cout << "Deleting Object" << endl; }
    int getX(){ return x; }
    int getY(){ return y; }
};
