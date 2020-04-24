//
//  main.cpp
//  CheckPath
//

#include <iostream>
#include<filesystem>
#include<string>
int main() {
    namespace fs=std::__fs::filesystem;
//定义路径，使用生字符串、转义字符串、正斜杠字符串
    fs::path p{"H:\\"};
    std::cout<<"C:total space:"<<fs::space(p).capacity<<std::endl;
    std::cout<<"C:total space:"<<fs::space(p).free<<std::endl;
//输出默认文件分隔符
//判断是否是常规文件，如果是，输出文件大小
//判断是否是目录，如果是目录，列出其子目录
//判断路径是否存在
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
