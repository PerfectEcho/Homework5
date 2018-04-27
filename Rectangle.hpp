// Brandon Abbott
// Assignment 5
// 4/23/18
// Rectangle.hpp



#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double width, double height, int start_x, int start_y);
    void getPostScript(std::ostringstream & stream);



private:
    double _width;
    double _height;
    int _start_x;
    int _start_y;
};






















#endif /* Rectangle_hpp */
