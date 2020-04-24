//本部分要展示的内容如下：

/*任务1：读文件
  1. 创建文件输入流，打开score.txt
  2. 用>>从文件读数据

任务2：使用fail()函数检测文件是否打开

任务3：将读文件语句放入循环，使用eof()作为循环条件

其它：关闭文件*/

#include <iostream>
#include<fstream>
#include<filesystem>
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::cin;
using std::endl;
using std::string;
namespace fs=std::filesystem;

int main() {
    fs::path p{"scores.txt"};
    ifstream input{p};
    if(input.fail()){
        cout<<"can't open file "<<p<<endl;
        return 0;
    }
   string name{""};
    double score{0.0};
     /*input>>name>>score;
    cout<<name<<" "<<score<<endl;
    input>>name>>score;
    cout<<name<<" "<<score<<endl;*/
    char x;
    while(!input.eof()){
        input.get(x);
        cout<<x;
    }
    return 0;
}
