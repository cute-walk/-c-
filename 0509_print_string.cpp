#include <iostream>
#include <string>

int main()
{
        std::string str;
        std::cout << "请随意输入字符串： " ;

        std::getline(std::cin, str);
        std::cout << str <<std::endl;

        return 0;
}
