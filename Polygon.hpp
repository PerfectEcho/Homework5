// Brandon Abbott
// Assignment 5
// 4/23/18
// Polygon.hpp



#ifndef Polygon_h
#define Polygon_h
#include <cmath>
#include <math.h>
#include "Shape.h"
using std::ostringstream;

class Polygon : public Shape {
public:
    Polygon(double width, double height, int numSides);
    double getWidth();
    double getHeight();
    int getNumSides();
    void getPostScript(std::ostringstream & stream);
    
    
    
private:
    double _width;
    double _height;
    int _numSides;
};




#endif /* Polygon_h */
