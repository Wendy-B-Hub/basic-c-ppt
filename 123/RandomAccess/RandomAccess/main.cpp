//
/*本部分要展示的内容如下：

演示如何随机存取文件
任务1：在文件中存2个long long int 和 "Hello World"字符串
任务2：从文件中读取Hello字符串
*/

#include <iostream>
#include <fstream>
#include <filesystem>
#include <array>
#include <vector>

namespace fs=std::filesystem;
using std::cout;
using std::endl;
using std::fstream;
int main() {
    // 任务1：在文件中存2个long long int 和 "Hello World"字符串
    fs::path p{"test.dat"};
    fstream file{p,std::ios::out|std::ios::in|std::ios::trunc};
    auto x{12ll},y{24ll};
    char str[]{"hello world"};
    file.write(reinterpret_cast<char*>(&x),sizeof(x));
    file.write(reinterpret_cast<char*>(&y),sizeof(long long int));
    file.write(str,sizeof(str));
    // 任务2：从文件中读取Hello字符串
    char buf[100]{0};
    file.seekg(2*sizeof(long long int),std::ios::beg);
    file.read(buf,5);
    std::cout<<buf<<std::endl;
    return 0;
}






























