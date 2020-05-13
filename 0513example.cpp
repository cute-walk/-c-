//在继承中的构造与析构


#include <iostream>
#include <string>

class BaseClass
{
public:
        BaseClass();
        ~BaseClass();

        void doSomething();

};

class SubClass:public BaseClass
{
public:
        SubClass();
        ~SubClass();
};


BaseClass::BaseClass()
{
        std::cout << "进去基类构造器： ：" << std::endl;

}

BaseClass::~BaseClass()
{
        std::cout << "进入基类析构器 " << std::endl;

}

void BaseClass::doSomething()

{
        std::cout << "我干了什么事。" << std::endl;
}

SubClass::SubClass()
{
        std::cout << "进去子类构造器" << std::endl;
}

SubClass::~SubClass()
{
        std::cout << " 进去子类析构器 “ " << std::endl;
}


int main()
{
        SubClass subclass;
        subclass.doSomething();
        std::cout << "完事，收工！" << std::endl;

        return 0;
}
