// Brandon Abbott
// Assignment 5
// 4/23/18
// Shape.cpp


#include "Shape.h"
#include <iostream>
using std::ostream;
using std::vector;
using std::unique_ptr;
using std::endl;
using std::make_unique;
using std::string;
using std::ostringstream;
using std::ifstream;



void Shape::rotate(int degree, ostringstream & stream, string name) {
    stream << "gsave" << endl;
    stream << "1.5 inch width -0.5 inch height moveto" << endl;
    stream << "0 0 " << degree << " rotate" << endl;
    stream << name << " stroke" << endl;
    stream << "grestore" << endl;
}

void Shape::scale(double width, double height, std::ostringstream & stream, std::string name) {
    stream << "gsave" << endl;
    stream << "1 inch width 1 inch height moveto" << endl;
    stream << width << " " << height << "  scale" << endl;
    stream << name  << endl;
    stream << "grestore" << endl;
}

void Shape::stackHorizontal(std::ostringstream & stream, std::string name, double width) {
    stream << name << endl;
    stream << width << " inch 0 inch translate" << endl;
    stream << name << endl;
    stream << width << " inch 0 inch translate" << endl;
    stream << name << endl;
}


void Shape::stackVertical(std::ostringstream & stream, std::string name, double height) {
    stream << name << endl;
    stream <<"0 inch " << height << " inch translate" << endl;
    stream << name << endl;
    stream << "0 inch " << height << " inch translate" << endl;
    stream << name << endl;
}
