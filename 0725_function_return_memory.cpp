// 在函数里电泳new语句为某个对象或某种基本数据类型分配一块内存，再把哪块内存的地址返回给程序的主代码， 主代码将使用哪块内存并在完成有关操作后立即释放
#include<iostream>
int *newInt(int value);

int main()
{
        int *x = newInt(20);

        std::cout << *x;
        delete x;
        x = NULL;


        return 0;
}


int *newInt(int value)
{
        int *myInt = new int;
        *myInt = value;

        return myInt;
}
