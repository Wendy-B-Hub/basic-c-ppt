#include <iostream>
#include <string>
#include "shape.h"
#include "circle.hpp"
#include "rectangle.hpp"

// creat Shape/Circle/Rectangle object

int main() {
    Shape s1{Color::blue,false};
    Circle c1{3.9};
    Rectangle r1{4.0,1.0};
    std::cout<<s1.toString()<<std::endl;
    std::cout<<c1.toString()<<std::endl;
    std::cout<<r1.toString()<<std::endl;
    return 0;
}

