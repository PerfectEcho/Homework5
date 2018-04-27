// Brandon Abbott
// Assignment 5
// 4/23/18
// main.cpp

#include <iostream>
#include "Shape.h"
#include "Square.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Spacer.hpp"
#include "Triangle.hpp"
#include <vector>

using std::ofstream;
using std::endl;
using std::cout;
using std::ostringstream;
using std::vector;


int main() {
    ostringstream stream;

    ofstream post_stream("PStest.ps");
    if (!post_stream.is_open()) {
        cout << "It worked" << endl;
        return 0;
    }

    Square a(1, 1, 1, "a");
    a.getPostScript(stream);

    Circle b(1, 3, 3, "b");
    b.getPostScript(stream);

    Triangle c(1, 4, 4, "c");
    c.getPostScript(stream);


    stream << "a" << endl;
    stream << "b" << endl;
    stream << "c" << endl;



    stream << "showpage" << endl;
    post_stream << stream.str();
    post_stream.close();


    return 0;
}
