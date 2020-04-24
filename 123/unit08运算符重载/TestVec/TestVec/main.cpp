//
//  main.cpp
//  TestVec
//
//  Created by Yashu Wu on 2/11/20.
//  Copyright © 2020 Yashu Wu. All rights reserved.
//

#include <iostream>
#include "Vec2D.hpp"
using std::cout;
using std::endl;

int main() {
    //创建向量对象
    Vec2D v1{3,5},v2{4,6};
    // 将向量转换为字符串形式表示
    cout<<"v1:="<<v1.toString()<<endl;
    cout<<"v2:="<<v2.toString()<<endl;
    // 向量加法：向量+向量，向量+数
    Vec2D v3=v1.add(v2);
    Vec2D v4=v3.add(10.0);
    cout<<"v1:="<<v3.toString()<<endl;
    cout<<"v2:="<<v4.toString()<<endl;
    // 向量剪发，向量点积，向量数乘
    Vec2D v5=v2.subtract(v1);
    double v6=v2.dot(v1);
    Vec2D v7=2.1*v3;
    cout << "v2 - v1 = " << v5.toString() << endl;
    cout << "v2 . v1 = " << v6 << endl;
    cout << "v3 * 2.1 = " << (v3 * 2.1).toString() << endl;
    cout << "2.1 * v3 = " << v7.toString() << endl;
    Vec2D va1{ 10, 12 } , va2{ 1, 2 };
    cout << " va1 += va2 : " << (va1 += va2).toString() << endl;
    cout << " va1 -= va2 : " << (va1 -= va2).toString() << endl;
    // 向量求负值
    Vec2D v8 = v2.negative();
     cout << "-v2 = " << (-v2).toString() << endl;
    // 向量自增、自减
    cout << "++v8 = " << (++v8).toString() << endl;
     cout << "v8++ = " << (v8++).toString() << endl;
     cout << "v8 = " << v8.toString() << endl;
     cout << "--v2 = " << (--v2).toString() << endl;
    // 读取或修改向量元素
    v1[ 0 ] = 31.1;
    cout << "v1.x_ = " << v1[ 0 ] << endl;
    cout << "v1.y_ = " << v1[ 1 ] << endl;
    // 向量的长度magnitude 和角度 direction
    cout << "v1.magnitude = " << v1.magnitude() << endl;
    cout << "double(v1) = " << static_cast<double>(v1) << endl;
    cout << "v1.direction = " << v1.direction() << endl;
    //比较两个向量
    cout << "v1 compare v2 : " << v1.compareTo(v2) << endl;
    cout << "Please input a Vec2D:";
    Vec2D v9{};
    std::cin >> v9; // operator>>(std::cin, v9);
    cout << v9 << endl;
    return 0;
}




































































