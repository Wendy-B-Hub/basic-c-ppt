//
/*本部分要展示的内容如下：

任务1：展示istream::getline函数的用法

任务2：展示std::getline函数的用法
 Shanhai Guan#Juyong Guan#Zijing Guan#Yanmen Guan#Niangzi Guan#Piantou Guan#Jiayu Guan#Yumen Guan
 */

#include <iostream>
#include <fstream>
#include <filesystem>
#include<array>
#include<string>
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main() {
    std::filesystem::path p{"/Users/yashuwu/Desktop/C++/GetlineDemo/GetlineDemo/GreatWall.txt"};
    ifstream in{p};         //打开一个输入流
    if(in.fail()){
        cout<<"can't open file"<<p<<endl;
        return 0;
    }
    /*constexpr int size=10;
    std::array<char,size>buf;
    while(!in.eof()){
        in.getline(&buf[0],size,'#');
        cout<<&buf[0]<<endl;
    }*/
    std::string name1{""};
    /*char x;
    while(!in.eof()){
        in.get(x);
        cout<<x;
    }*/
    while(!in.eof()){
        std::getline(in,name1,'#');
        cout<<name1<<endl;
    }
    return 0;
}












































