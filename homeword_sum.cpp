#include <iostream>

int main()
{
        int sum = 0;
        std::cout << "请输入一串整数和任意数目的空格：";
        int i;
        while( std::cin >> i)   //cin为输入流对象，它知道如何从用户终端读取数据。它一次从输入流对象cin提取一个整数。
                                //如果用户不进行键盘的输入，程序将会阻塞。这个操作符对所有内建的数据类型都进行了重载，所以它可以从输入流对象提取出int，float，double性数据，也可以提取字符串等数据。
                                //表达式 cin>>i 返回输入流对象本身，也就是cin。如果到达了文件尾或者提取操作符遇到一个非法值，这个返回值将是false。
        {
                sum += i;
                while(std::cin.peek() == ' ')   //cin.peek() 检测输入流中的数据
                {
                        std::cin.get();
                }
                if(std::cin.peek() == '\n')
                {
                        break;
                }
        }

        std::cout << "结果是：" << sum << std::endl;
        return 0;
}
