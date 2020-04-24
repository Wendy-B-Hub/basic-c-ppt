
// 函数模板定义
template <typename T>
T max(T x,T y){
    return (x>y?x:y);
}
// 显式实例化：整数
template <int>int max(int,int);
#include <iostream>
#include<string>
using namespace std::string_literals;

int main() {
    // 调用显式实例化的函数
    std::cout<<"max(1,2)"<<max(1,2)<<std::endl;
    // 浮点数实例化
    std::cout<<"max(2.9,1.0):"<<max(2.9,1.0)<<std::endl;
    // 字符实例化
    std::cout<<"max('A','D'):"<<max('A','D')<<std::endl;
    // 字符串字面量实例化
    std::cout<<R"(max("ABC","ABD"):)"<<max("ABC","ABD")<<std::endl;
    std::cout<<R"(max("ABC","ABD"):)"<<max("ABD","ABC")<<std::endl;
    // std::string类型实例化
    std::cout<<R"(max("ABC"s,"ABD"s))"<<::max("ABC"s, "ABD"s)<<std::endl;
    return 0;
}
