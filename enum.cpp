//枚举（enum）用来创建一个可取值的列表。

#include <iostream>

int main()
{
        enum weekdays{Monday, Tuesday, Wednesday, Thursday, Friday };

        weekdays today;

        today = Monday;
        std::cout << today << std::endl;

        today = Tuesday;
        std::cout << today << std::endl;
}


//枚举的作用：
//对变量的可取值加以限制,可以作为switch条件语句的case标号。
