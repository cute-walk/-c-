#include <fstream>
#include <iostream>

int main()
{
        std::ofstream out("test.txt", std::ios::app );   //ios::in 打开一个可读文件
                                        //ios::binary 以二进制形式打开文件
                                        //ios::app 写入的数据将被追加到文件的末尾
                                        //ios::trunk 删除文件原来的内容
                                        //ios::noctrate 如果文件不存在，那么open函数无法运行
                                        //ios::noreplece 如果打开的文件已存在，则返回错误
        if(! out)
        {
                std::cerr << "打开文件失败！" << std::endl;
                return 0;
        }

        for ( int i = 0 ; i < 10; i++)
        {
                out << i;
        }

        out << std::endl;
        out.close();

        return 0;
}
