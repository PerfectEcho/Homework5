// Brandon Abbott
// Assignment 5
// 4/23/18
// Spacer.cpp


#include "Spacer.hpp"
using std::endl;

Spacer::Spacer(double width, double height, int start_x, int start_y) {
    _width = width;
    _height = height;
    _start_x = start_x;
    _start_y = start_y;
}

void Spacer::getPostScript(std::ostringstream & stream) {
    stream << "%Spacer" << endl;
    stream << "/width {" << _width << " mul} def" << endl;
    stream << "/height {" << _height << " mul} def" << endl;
    stream << "/spacer{" << endl;
    stream << _start_x+_width << " inch " << _start_y+_height << " inch rmoveto" << endl;
    stream << "}def" << endl << endl;


}
