//抽象类和纯虚函数
//  本部分展现的内容如下：
//
//task1:实现Shape/Circle/Rectangle类
//task2:在Shape中添加virtual getArea()=0;尝试创建Shape对象
//task3:在实现Circle中不实现getArea(),创建Circle对象
//      在实现Circle中实现getArea() override;创建Circle对象

#include <iostream>
#include <string>
#include "shape.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

// creat Shape/Circle/Rectangle object

int main() {
    //Shape s1{Color::blue,false};
    Circle c1{3.9,Color::green,true};
    Shape* p=&c1;
    //Rectangle r1{4.0,1.0,Color::white,true};
    //std::cout<<s1.toString()<<std::endl;
    std::cout<<c1.getArea()<<std::endl;
    std::cout<<p->getArea()<<std::endl;
    //std::cout<<r1.toString()<<std::endl;
    return 0;
}
