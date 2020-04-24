//
//  rectangle.hpp
//  herite from shape
//
//

#ifndef rectangle_hpp
#define rectangle_hpp
#include "shape.hpp"

class Rectangle:public Shape{
    double width{1.0};
    double height{1.0};
public:
    Rectangle()=default;
    Rectangle(double w,double h,Color c,bool f);
    
    double getWidth() const;        //对象的状态不被改变
    void setWidth(double w);
    double getHeight() const;
    void setHeight(double h);
    
    double getArea() const;
    string toString();
};

#endif /* rectangle_hpp */




