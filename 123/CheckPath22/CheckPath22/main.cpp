//
//  main.cpp
//  CheckPath22

//

#include <iostream>
#include <filesystem>
#include <string>

int main() {
    namespace fs=std::filesystem;
    //定义路径，使用生字符串、转义字符串、正斜杠字符串
    fs::path p{"hello.rtf"};
    fs::path p1{R"(/Users/yashuwu/Desktop/C++/CheckPath22/CheckPath22/hello.rtf)"};
    //输出默认文件分隔符
    std::cout<<fs::path::preferred_separator<<std::endl;
    //判断是否是常规文件，如果是，输出文件大小
    if(fs::is_regular_file(p1)){
        std::cout<<"p1 size is: "<<fs::file_size(p1)<<std::endl;
        //判断是都是目录，如果是目录，列出其子目录
    }else if(fs::is_directory(p1)){
        std::cout<<p1<<"is a directory,includes"<<std::endl;
        for(auto& e:fs::directory_iterator(p1)){
            std::cout<<"  "<<e.path();
        }
    }
    //判断路径是否存在
    else if (fs::exists(p1)){
        std::cout<<p1<<"  is a special file\n";
    }else{
        std::cout<<p1<<"does not exist"<<std::endl;
    }
    return 0;
}
