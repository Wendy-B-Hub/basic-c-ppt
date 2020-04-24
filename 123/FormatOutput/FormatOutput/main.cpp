//
/*本部分要展示的内容如下：

任务1：展示setw和setfill
1. setw只对紧随其后的数据起作用
2. setfill指定填充字符

任务2：展示 setprecision、fixed、showpoint、left、right

任务3：展示 hexfloat
 */

#include <iostream>
#include<iomanip>
using std::cout;
using std::endl;

int main(){
    // 任务1：展示setw和setfill
    cout<<std::setw(4)<<std::setfill('#')<<"a"<<endl;
    cout<<std::setfill('#');
    for(int i=0;i<5;i++){
        cout<<std::setw(i+2 )<<' '<<endl;
    }
    // 任务2：展示 setprecision、fixed、showpoint、left、right
    double pi=3.14159265358979323846;
    cout<<std::setprecision(6)<<pi<<endl;
    cout<<std::setprecision(6)<<std::fixed<<pi<<endl;
    double y=3.0;
    cout<<y<<endl;
    cout<<std::showpoint<<y<<endl;
    cout<<std::setw(20)<<std::left<<pi<<endl;
    cout<<std::setw(20)<<std::right<<pi<<endl;
     // 任务3：展示 hexfloat
    double x=8.0;
    cout<<"(1)"<<std::hexfloat<<x<<endl;
    cout<<"(2)"<<std::defaultfloat;
    cout<<"(3)"<<x<<endl;
    cout<<"(4)"<<std::showpoint<<x<<endl;
}


