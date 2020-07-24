//this指针，指向当前的类生成的对象。
//使用fishc指针的基本原则：如果代码不存在二义性隐患，就不必使用this指针。

//继承：对现有的代码进一步扩展，并应用到新的程序中。



//基类：可以派生出其他类。
//子类：

// class SubClass:public SuperClass{}
// class Pig:public Animal{}


#include <iostream>
#include <string>

class Animal
{
public:
        std::string mouth;

        void eat();
        void sleep();
        void drool();
};

class Pig:public Animal
{
public:
        void climb();
};

class Turtle:public Animal
{
public:
        void swim();
};

void Animal::eat()
{
        std::cout << "I'm eatting!" <<std::endl;
}

void Animal::sleep()


        std::cout << " I'm sleeping! " << std::endl;
}

void Animal::drool()
{
        std::cout << " 我想流口水" << std::endl;
}

void Pig::climb()
{
        std::cout << "母猪会上树" << std::endl;
}

void Turtle::swim()
{
        std::cout << " 乌龟会游泳 " << std::endl;
}



int main()
{
        Pig pig;
        Turtle turtle;

        pig.eat();
        turtle.eat();
        pig.climb();
        turtle.swim();



        return 0;
}
