// Brandon Abbott
// Assignment 5
// 4/23/18
// Square.cpp


#include "Square.hpp"
using std::endl;



Square::Square(double width, int start_x, int start_y, std::string name) {
    _width = width;
    _height = width;
    _start_x = start_x;
    _start_y = start_y;
    _name = name;
}

double Square::getWidth() {
    return _width;
}

double Square::getHeight() {
    return _height;
}

std::string Square::getName() {
    return _name;
}

void Square::getPostScript(std::ostringstream & stream) {
    stream << "%Square" << endl;
    stream << "/" << getName() << "{" << endl;
    stream << "/width {" << getWidth() << " mul} def" << endl;
    stream << "/height {" << getHeight() << " mul} def" << endl;
    stream << "gsave" << endl;
    stream << _start_x << " inch " << _start_y << " inch moveto" << endl;
    stream << "1 inch width 0 inch height rlineto" << endl;
    stream << "0 inch width 1 inch height rlineto" << endl;
    stream << "-1 inch width 0 inch height rlineto" << endl;
    stream << "closepath" << endl;
    stream << "1 0.5 0.5 setrgbcolor" << endl;
    stream << "fill" << endl;
    stream << "grestore" << endl;
    stream << "stroke" << endl;
    stream << "}def" << endl << endl;


}
