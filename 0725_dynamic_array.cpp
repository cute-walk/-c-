// 动态定义数组的长度

#include<iostream>
#include<string>

int main()
{
        unsigned int count = 0;

        std::cout << "please input the numboer:  ";
        std::cin >> count;

        int *x = new int[count];

        for (int i=0; i<count; i++)
        {
                x[i] = i;
        }

        for (int i=0; i<count; i++)
        {
                std::cout << "x[" << i << "]= " << x[i] << std::endl;
        }

        return 0;
}
