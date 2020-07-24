//变量对其问题。 在C++里，变量类型是根据它们的自然边界对齐的。对齐问题会因为系统平台的不同而不同。

// 变量地址在程序执行期间是不会发生变化的。不过，同一个程序不同时间加载到内存中，同一个变量的地址是会改变的。

//地址是计算机内存中的某个位置，而指针是专门用来存放地址的特殊类型变量。
// int *p;
// int pp = 123;
// p = &pp;


//在创建指针时，空格放在那里都是没关系的，int *p1; int * p1; int* p1;
//指针变量前边的类型是用来说明指针指向的数据类型。


//

#include <iostream>

int main()
{
        int a = 123;
        float b = 3.14;
        char c = 'C';
        unsigned long d = 19880808;
        std::string e = "I love c++!";

        std::cout << "a的值是：" << a << std::endl;
        std::cout << "b的值是：" << b << std::endl;
        std::cout << "c的值是：" << c << std::endl;
        std::cout << "d的值是：" << d << std::endl;
        std::cout << "e的值是：" << e << std::endl;

        int *aPointer = &a;
        float *bPointer = &b;
        char *cPointer = &c;
        unsigned long *dPointer = &d;
        std::string *ePointer = &e;

        *aPointer = 456;
        *bPointer = 4.13;
        *cPointer = 'F';
        *dPointer = 20111124;
        *ePointer = "I love Beauty!";

        std::cout << "a的值是：" << a << std::endl;
        std::cout << "b的值是：" << b << std::endl;
        std::cout << "c的值是：" << c << std::endl;
        std::cout << "d的值是：" << d << std::endl;
        std::cout << "e的值是：" << e << std::endl;

        return 0;

}

//指针所保存的是内存中的一个地址。并不保存指向的数据的值本身。因此，务必确保指针对应一个已经存在的变量或一块已经分配了的内存。

//*号的作用，1，创建指针；2.解引用。

