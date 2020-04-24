//task1:创建类结构：computer->PC->Desktop/Laptop以及相应的ctor/dtor main中创建Desktop/Laptop的
// 对象，观察ctor/dtor调用次序
//
//task2:增加Camera作为Laptop的内嵌对象c的类型，main中创建Laptop对象，观察内嵌对象c的构造与基类构造次序
//
#include <iostream>
using std::cout;
using std::endl;
class Computer{
public:
    Computer(){cout<<"computer()"<<endl;}
    ~Computer(){cout<<"computer()"<<endl;}
};

class PC:public Computer{
public:
    PC(){cout<<"PC()"<<endl;}
    ~PC(){cout<<"PC()"<<endl;}
};

class Desktop:public PC{
public:
    Desktop(){cout<<"Desktop()"<<endl;}
    ~Desktop(){cout<<"Desktop()"<<endl;}
};

class Camera{
public:
    Camera(){cout<<"Embedded Camera()"<<endl;}
    ~Camera(){cout<<"Embedded ~Camera()"<<endl;}
};

class Laptop:public PC{
private:
    Camera c{};
public:
    Laptop(){cout<<"Laptop()"<<endl;}
    ~Laptop(){cout<<"Laptop()"<<endl;}
};

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    Desktop d{};
    Laptop l{};
    return 0;
}
