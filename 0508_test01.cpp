// 题目：向用户提出一个“y/n” 的问题，然后把用户输入的值赋值给answer变量

// 要求： 针对用户输入的‘Y’和‘y’，‘N’和‘n’进行过滤

#include <iostream>

int main()
{
        char answer;
        std::cout <<" 你吃饭了么？" << '\n';
        std::cin >> answer;

        switch (answer)
        {
                case 'y':
                case 'Y':
                std::cout<<"你吃饭了"<< std::endl;
                break;
                case 'n':
                case 'N':
                std::cout<< "你没吃饭" << std::endl;
                break;
                default:
                std::cout << "输入为非法字符" <<std::endl;
        }
        std::cin.ignore(10, '\n');
        std::cout << "\n输入任意字符退出" <<std::endl;
        std::cin.get();
        return 0;
}
