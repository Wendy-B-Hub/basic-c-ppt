//
/*自定义异常类

展示内容如下：

任务1：创建Vec3D类，用 array 保存向量成员；
任务2：创建RangeException类
      定义构造函数
      RangeException(std::size_t dimension,
                     const int index)

任务3：实现Vec3D::operator[](const int index)
      当index越界时，抛出RangeException的对象

任务4：在主函数中创建Vec3D对象并调用[]制造越界问题
      捕获异常并输出异常中的信息
*/

#include <iostream>
#include <exception>
#include "Vec3D.h"

int main() {
    Vec3D v1{1.2,3.2,4.3};
    try{
        v1[1]=1.0;
        std::cout<<v1[4];
    }catch(std::exception& e ){
        std::cout<<"Exception:"<<e.what()<<std::endl;
        if(typeid(e)==typeid(RangeException)){
            auto r=dynamic_cast<RangeException &>(e);
            std::cout<<"Vector dimension"<<r.getDimension()<<std::endl;
            std::cout<<"Index:"<<r.getIndex()<<std::endl;
        }
    }
    return 0;
}
