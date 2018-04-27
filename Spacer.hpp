// Brandon Abbott
// Assignment 5
// 4/23/18
// Spacer.hpp


#ifndef Spacer_hpp
#define Spacer_hpp

#include "Shape.h"

class Spacer : public Shape {
public:
    Spacer(double width, double height, int start_x, int start_y);
    void getPostScript(std::ostringstream & stream);



private:
    double _width;
    double _height;
    int _start_x;
    int _start_y;
};












#endif /* Spacer_hpp */
