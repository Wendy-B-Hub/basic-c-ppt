//
//  main.cpp
//  PathQuery
//

#include <iostream>
#include <filesystem>
using std::endl;
using std::cout;

int main() {
    namespace fs=std::filesystem;
    //定义路径p
    fs::path p{R"(/Users/yashuwu/Desktop/C++/PathQuery/PathQuery)"};
    //是否存在？根名？根路径？相对路径？
    if(p.empty()){
        cout<<"path"<<p<<"is empty"<<endl;
    }
    if(!fs::exists(p)){
        cout<<"path"<<p<<"does not exist."<<endl;
        std::exit(0);
    }
    cout<<"root_name():"<<p.root_name()<<"\n"
        <<"root_path():"<<p.root_path()<<"\n"
    <<"relative_path():"<<p.relative_path()<<"\n";
    //父路径？文件名？文件名主干？扩展名？
    cout<<"parent_path():"<<p.parent_path()<<"\n"
    <<"filename():"<<p.filename()<<"\n"
    <<"stem():"<<p.stem()<<"\n"
    <<"extension():"<<p.extension()<<"\n";
    
    return 0;
}
