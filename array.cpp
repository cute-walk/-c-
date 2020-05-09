// 定义一个数组容纳10个整数，这些整数来自用户输入。我们将计算这些值得累加和、平均值并输出。

#include <iostream>
#define item 10
int main()
{
        int data[item];
        double sum = 0;
        std::cout << "请输入" << item << "个整型数据！ "<< std::endl;
        for (int i = 0; i < item; i++)
        {
                std::cout << "请输入第 " << i + 1 << "个数据： " ;
                std::cin >> data[i];
                while(!std::cin >> data[i])
                {
                        std::cin.clear();
                        std::cin.ignore(10, '\n');
                        std::cout << "请输入合法值, ";
                        i--;
                }
        }

        for (int i = 0; i < item; i++)
        {
                sum += data[i];
        }

        double average = sum *1.0 / (sizeof(data)/sizeof(data[0]));

        std::cout << "sum = " << sum <<std::endl;
        std::cout << "average = " << average << std::endl;

        return 0;

}
