// Brandon Abbott
// Assignment 5
// 4/23/18
// Triangle.hpp



#ifndef Triangle_hpp
#define Triangle_hpp

#include "Shape.h"

class Triangle : public Shape {
public:
    Triangle(double sidelength, int start_x, int start_y, std::string name);
    void getPostScript(std::ostringstream & stream);



private:
    double _sidelength;
    double _width;
    double _height;
    int _start_x;
    int _start_y;
    std::string _name;
};









#endif /* Triangle_hpp */
