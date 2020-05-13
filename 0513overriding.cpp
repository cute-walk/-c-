#include <iostream>
#include <string>

class Animal
{
public:
        Animal(std::string theName);

        void eat();
        void sleep();
        void drool();

protected:
        std::string name;
};

class Pig:public Animal
{
public:
        Pig(std::string theName);
        void climb();
        void eat();
};

class Turtle:public Animal
{
public:
        Turtle(std::string theName);
        void swim();
        void eat();
};


Animal::Animal(std::string theName)
{
        name = theName;
}

void Animal::eat()
{
        std::cout << "I'm eatting! " << std::endl;
}

void Animal::sleep()
{
        std::cout << "I'm sleep!" << std::endl;
}

void Animal::drool()
{
        std::cout << "我会留口水！ " << std::endl;
}

Pig::Pig(std::string theName):Animal(theName)
{
}

void Pig::climb()
{
        std::cout << "我会上树" << std::endl;
}

void Pig::eat()
{
        Animal::eat();
        std::cout << name << "正在吃鱼！\n";
}

Turtle::Turtle(std::string theName):Animal(theName)
{
}

void Turtle::swim()
{
        std::cout << "我会游泳！\n";
}

void Turtle::eat()
{
        Animal::eat();
        std::cout << name << "正在吃东坡肉！\n";
}


int main()
{
        Pig pig("小猪猪");
        Turtle turtle("小甲鱼");

        pig.eat();
        turtle.eat();
        pig.climb();
        turtle.swim();

        return 0;
}
