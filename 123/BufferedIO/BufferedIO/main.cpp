//
//  main.cpp
//  BufferedIO
//
//  Created by Yashu Wu on 2/5/20.
//  Copyright © 2020 Yashu Wu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;
namespace fs=std::__fs::filesystem;
int main() {
    fs::path p{"text1.rtf"};
    ifstream input{p};
    if(input.fail()){
        cout<<"it's failure"<<endl;
    }
    string name{""};
    double score{0.0};
    input>>name>>score;
    cout<<name<<"  "<<score<<endl;
    input>>name>>score;
    cout<<name<<"  "<<score<<endl;
    /*std::cin.sync_with_stdio(false);
    auto p=std::cin.rdbuf();
    std::cout<<p<<std::endl;
    auto x=std::cin.peek();
    std::cout<<"x="<<x<<std::endl;
    std::cout<<"there are "<<p->in_avail() <<" characters in the buffer"<<std::endl;
    auto count=p->in_avail();
    for(int i=0;i<count;i++){
        std::cout<<i+1<<":"<<std::cin.get()<<std::endl;
    }
     */
    return 0;
}
