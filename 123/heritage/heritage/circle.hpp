
//补全Circle类，从Shape继承

#ifndef circle_hpp
#define circle_hpp
#include "shape.hpp"

class Circle:public Shape{
    double radius;
public:
    Circle();
    Circle(double radius_,Color c,bool f);
    virtual double getArea() override;
    double getRadius() const;
    void setRaius(double radius);
    string toString();
};
#endif /* circle_hpp */
