//类的第一个字母采用大写是一种习惯。类声明的末尾必须有一个分号。
//类由变量和函数组成。对象使用变量存储信息，调用函数来完成操作。类里面的变量为属性，函数为方法。

#include <iostream>


class Car
{
public:              //
        std::string color;
        std::string engine;
        float gas_tank;
        unsigned int whell;

        void fillTank(float liter);
        void running(void);

};

void Car::fillTank(float liter)   //方法的定义安排在类声明的后面。
{
        gas_tank += liter;
}


// c++允许在类里定义常量，但不允许对它进行赋值。可以使用静态常量解决（static const float FULL_GAS = 85)

//定义构造器：1.构造器的名字必须和它所在的类的名字一样；2.系统在创建某个类的实例会第一时间自动调用这个类的构造器；3构造器不返回任何值。
//创建构造器，需要把它的神明添加到类里：

//class Car
//{
//      Car(void);
//}

//结束声明后定义构造器本身。
//Car::Car(void)   //不用写void Car::Car(void)
//{
//      color = "WHITE";
//      engine = "V8";
//      wheel = 4;
//      gas_tank = FULL_GAS;
//}


//构造对象数组：
//Car mucar[10];  mycar[x].running;
//


//每个类至少有一个构造器，如果你没有定义，编译器就会自动定义一个空的构造器。


//





//析构器：
//构造器用来完成事先的初始化和准备工作，析构器用来完成事后所必须的清理工作。
//析构器不返回任何值；析构器不带参数。    ~ClassName()



#include <iostream>
#include <string>
#include <fstream>

class StoreQuote
{
public:
        std::string quote, speaker;
        std::ofstream fileOutput;

        StoreQuote();
        ~StoreQuote();

        void inputQuote();
        void inputSpeaker();
        bool write();
};

StoreQuote::StoreQuote()
{
        fileOutput.open("test.txt", std::ios::app);
}

StoreQuote::~StoreQuote()
{
        fileOutput.close();
}

void StoreQuote::inputQuote()
{
        std::getline(std::cin, quote);
}

void StoreQuote::inputSpeaker()
{
        std::getline(std::cin, speaker);
}

bool StoreQuote::write()
{
        if(fileOutput.is_open() )
        {
                fileOutput << quote << "!" << speaker << std::endl;
                return true;
        }
        else
        {
                return false;
        }
}


int main()
{
        StoreQuote quote;

        std::cout << "请输入一句名言：\n";
        quote.inputQuote();

        std::cout << "请输入作者：\n";
        quote.inputSpeaker();

        if(quote.write())
        {
                std::cout << "成功写入文件" <<std::endl;
        }
        else
        {
                std::cout << "写入文件失败 ";
                return 1;
        }

        return 0;

}
