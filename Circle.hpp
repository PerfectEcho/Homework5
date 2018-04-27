// Brandon Abbott
// Assignment 5
// 4/23/18
// Circle.hpp


#ifndef Circle_hpp
#define Circle_hpp
#include "Shape.h"


class Circle : public Shape {
public:
    Circle(double radius, int start_x, int start_y, std::string name );
    void getPostScript(std::ostringstream & stream);
    double getWidth();
    double getHeight();


private:
    double _width;
    double _height;
    int _start_x;
    int _start_y;
    std::string _name;
};

















#endif /* Circle_hpp */
