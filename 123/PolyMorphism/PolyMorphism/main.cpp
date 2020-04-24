//
//  main.cpp
//  PolyMorphism
//task1：创建A B C三个类，B继承A，C继承B，ABC均有toString 函数
//task2：创建print 函数,接受A类型的参数，调用A对象的toString()
//task3：重载print函数，接受B/C类型的参数，调用toString()

#include <iostream>
#include <string>
using std::cout;
using std::endl;

class A{
public:
    virtual std::string toString(){return "A";}
};

class B:public A{
public:
    virtual std::string toString (){return "B";}
};

class C:public B{
public:
    virtual std::string toString (){return "C";}
};

void print(A* o){
    cout<<o->toString()<<endl;
}

void print(A& o){
    cout<<o.toString()<<endl;
}

int main() {
    A a;B b;C c;
    A* p1=&a;
    A* p2=&b;
    A* p3=&c;
    print(p1);
    print(p2);
    print(p3);
    print(a);
    print(b);
    print(c);
    return 0;
}
