// Brandon Abbott
// Assignment 5
// 4/23/18
// Shape.h


#ifndef Shape_h
#define Shape_h

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using std::string;


class Shape{
public:


    void rotate(int degree, std::ostringstream & stream, std::string name);
    void scale(double width, double height, std::ostringstream & stream, std::string name);
    void stackHorizontal( std::ostringstream & stream, std::string name, double width);
    void stackVertical(std::ostringstream & stream, std::string name, double height);
    void layered(std::ostringstream & stream, std::string name);


private:
    double _width;
    double _height;
    int _start_x;
    int _start_y;
};
#endif /* Shape_h */
