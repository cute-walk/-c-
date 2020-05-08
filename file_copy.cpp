#include <fstream>
#include<iostream>

int main()
{
        std::ifstream in;   //ifstream 文件读取类
                                //ofstream 文件写入类

        in.open("test.txt");
        if(!in)
        {
                std::cerr<< "打开文件失败"<< std::endl;
                return 0;
        }
        char x;
        while(in >> x)
        {
                std::cout << x;
        }

        std::cout<<std::endl;

        in.close();

        return 0;
}
