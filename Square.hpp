// Brandon Abbott
// Assignment 5
// 4/23/18
// Square.hpp


#ifndef Square_hpp
#define Square_hpp

#include <stdio.h>
#include "Shape.h"


class Square : public Shape {
public:
    Square(double width, int start_x, int start_y, std::string name);
    void getPostScript(std::ostringstream & stream);
    double getWidth();
    double getHeight();
    std::string getName();

private:
    double _width;
    double _height;
    int _start_x;
    int _start_y;
    std::string _name;
};












#endif /* Square_hpp */
