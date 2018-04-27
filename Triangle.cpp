// Brandon Abbott
// Assignment 5
// 4/23/18
// Triangle.cpp




#include "Triangle.hpp"
#include <cmath>
using std::endl;


Triangle::Triangle(double sidelength, int start_x, int start_y, std::string name) {
    _sidelength = sidelength;
    _width = sidelength;
    _height = sqrt(_sidelength*_sidelength - (_sidelength/2)*(_sidelength/2));
    _start_x = start_x;
    _start_y = start_y;
    _name = name;
}


void Triangle::getPostScript(std::ostringstream & stream) {
    stream << "%%Triangle" << endl;
    stream << "/" << _name << "{" << endl;
    stream << "/width {" << _width << " inch mul} def" << endl;
    stream << "/height {" << _height << " inch mul} def" << endl;
    stream << "gsave" << endl;
    stream << _start_x << " inch " << _start_y << " inch rmoveto" << endl;
    stream << "1 width 2 div 1 height rlineto" << endl;
    stream << "1 width 2 div -1 height rlineto" << endl;
    stream << "closepath" << endl;
    stream << "0 0.5 1 setrgbcolor" << endl;
    stream << "fill" << endl;
    stream << "grestore" << endl;
    stream << "stroke" << endl;
    stream << "}def" << endl;
    stream << endl;

}
