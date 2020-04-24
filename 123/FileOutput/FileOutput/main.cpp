//
//  main.cpp
//  FileOutput
//

#include <iostream>
#include <fstream>
#include <filesystem>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
namespace fs=std::filesystem;
int main() {
    fs::path p{"scores.rtf"};
    ofstream output{p};
    double lileileiScore{90.5};
    int hanmeimeiScore{84};
    output<<"lilei"<<"  "<<lileileiScore<<endl;
    output<<"hanmeimeiScore"<<"  "<<hanmeimeiScore<<endl;
    cout<<"size of"<<p<<"is"<<fs::file_size(p)<<endl;
    output.open(p);
    output.close();
    return 0;
}
