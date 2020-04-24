#include<iostream>
#include "circle.hpp"

Circle::Circle(){
    radius=1.0;
}

Circle::Circle(double radius_,Color c,bool f):Shape{c,f}{
    radius=radius_;
}

double Circle::getArea(){
    return (3.14*radius*radius);
}

double Circle::getRadius() const{
    return radius;
}

void Circle::setRaius(double radius){
    this->radius=radius;
}

string Circle::toString(){
    return ("Circle:radius"+std::to_string(radius)+","+colorToString()+" "+filledToString());
}
