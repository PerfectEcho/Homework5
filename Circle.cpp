// Brandon Abbott
// Assignment 5
// 4/23/18
// Circle.cpp


#include "Circle.hpp"
using std::endl;

Circle::Circle(double radius, int start_x, int start_y, std::string name) {
    _width = radius * 2;
    _height = radius * 2;
    _start_x = start_x;
    _start_y = start_y;
    _name = name;
}

double Circle::getWidth() {
    return _width;
}

double Circle::getHeight() {
    return _height;
}

void Circle::getPostScript(std::ostringstream & stream) {
    stream << "%Circle" << endl;
    stream << "/" << _name << "{" << endl;
    stream << "/width {" << _width << " mul} def" << endl;
    stream << "/height {" << _height << " mul} def" << endl;
    stream << (_start_x+_width)/2 << " inch " << (_start_y+_width)/2 << " inch " << _width/2 << " inch 0 360 arc" << endl;
    stream << "0 1 0.5 setrgbcolor fill" << endl;
    stream << "stroke" << endl;
    stream << "}def" << endl << endl;


}
