//题目：编写一个“温度单位转换程序”，提示用户以 【xx.x C】或【xx.x F】的格式输入


#include <iostream>

int main()

{
        const unsigned short ADD_SUBTRACT = 32;
        const double RATID = 9.0/5.0;
        double t1, t2;
        char typein, typeout;
        std::cout << "请出入需要转换的温度：  " << std::endl;
        std::cin >> t1 >> typein ;
        std::cin.ignore(10,'\n');

        switch (typein)
        {
                case 'c':
                case 'C':
                t2 = t1 * RATID + ADD_SUBTRACT;
                typeout = 'F';
                break;
                case 'f':
                case 'F':
                t2 = (t1 - ADD_SUBTRACT) / RATID;
                typeout = 'C';
                break;
                default :
                std::cout<< "您输入的格式有误" <<std::endl;
                typeout = 'E';
                break;


        }
        if (typeout != 'E')
        {
                std::cout << t1 << typein << '=' << t2 << typeout <<std::endl;

        }
        std::cout << " 请输入任何字符退出" << std::endl;
        std::cin.get();
        return 0;

}
