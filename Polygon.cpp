// Brandon Abbott
// Assignment 5
// 4/23/18
// Polygon.cpp



#include "Polygon.hpp"
using std::ostream;
using std::endl;
using std::ostringstream;

Polygon::Polygon(double width, double height, int numSides){
    _width = width;
    _height = height;
    _numSides = numSides;
    
}

double Polygon::getWidth(){
    switch (_numSides % 2) {
        case 0:
            if(_numSides % 4 == 0) {
                _width = (4 * cos(M_PI/_numSides))/(sin(M_PI/_numSides));
            }
            else {
                _width = 4 / (sin(M_PI/_numSides));
            }
            break;
        case 1:
            _width = (4 * sin(M_PI*(_numSides - 1)/(2 * _numSides))) / (sin(M_PI/_numSides));
            break;
        default:
            break;
    }
    
    return _width;
}

double Polygon::getHeight(){
    switch (_numSides % 2) {
        case 0:
            if(_numSides % 4 == 0) {
                _height = 4 * (cos(M_PI/_numSides)) / (sin(M_PI/_numSides));
            }
            else {
                _height = 4 * (cos(M_PI/_numSides)) / (sin(M_PI/_numSides));
            }
            break;
        case 1:
            _height = 4 * (1 + cos(M_PI/_numSides)) / (2 * sin(M_PI/_numSides));
            break;
        default:
            break;
    }
    
    
    return _height;
}

int Polygon::getNumSides(){
    return _numSides;
}


void Polygon::getPostScript(ostringstream & stream){
    
    stream << "/defpoly {" << endl;
    stream << "4 dict begin /p exch def /n exch def" << endl;
    stream << "/m matrix currentmatrix def" << endl;
    stream << " dup scale" << endl;
    stream << "/s matrix currentmatrix def" << endl;
    stream << "0 360 n div 359.9" << endl;
    stream << "({" << endl;
    stream << "{" << endl;
    stream << "//s setmatrix" << endl;
    stream << "rotate" << endl;
    stream << "//p exec" << endl;
    stream << "} for" << endl;
    stream << "//m setmatrix" << endl;
    stream << "}) token pop exch pop" << endl;
    stream << "bind" << endl;
    stream << "end exec" << endl;
    stream << "} bind def" << endl;
    stream << endl;
    stream << "/drawpoly {" << endl;
    stream << "gsave" << endl;
    stream << "translate" << endl;
    stream << "1 index 0 moveto" << endl;
    stream << "{" << endl;
    stream << "1 0 lineto" << endl;
    stream << "} defpoly" << endl;
    stream << "closepath stroke" << endl;
    stream << "grestore" << endl;
    stream << "} def" << endl;
    stream << "100" << getNumSides() << getHeight() << getWidth() << "drawpoly"<< endl;
}
