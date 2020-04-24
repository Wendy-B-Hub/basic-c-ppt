//
//  shape.hpp
//  RedefineFucntions
//
//  Created by Yashu Wu on 2/5/20.
//  Copyright © 2020 Yashu Wu. All rights reserved.
//

#ifndef shape_hpp
#define shape_hpp

#include<iostream>
#include<array>
#include<string>
using std::string;
using namespace std::string_literals;
enum class Color {
    white,black,red,green,blue,yellow,
};

class Shape{
private:
    Color color{Color::black};
    bool filled{false};
    std::array<string,6>colorNames{"white"s,"black"s,"red"s,"green"s,"blue"s,"yellow"s,};
public:
    Shape()=default;
    Shape(Color color_,bool filled_);
    Color getColor();
    void setColor(Color color_);
    bool isFilled();
    void setFilled(bool filled_);
    string toString();
    string colorToString();
    string filledToString();
    
    virtual double getArea()=0; //pure abstract function
};
#endif /* shape_hpp */
