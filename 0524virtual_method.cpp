//在没有创建变量的情况下为有关数据分配内存，直接创建一个指针并让它指向新分配的内存块：
// int * pointer = new int;
// *pointer = 110;
// std::cout << *pointer;
// delete pointer;
// 每一个 new 必须对应 delete 操作


//在类中声明虚方法
// vitrual void play();

//虚方法是继承的，一旦在基类里把某个方法声明为虚方法，在子类中就不可能再把它声明为一个非虚方法。


#include<iostream>
#include <string>

class Pet
{
public:
        Pet(std::string theName);

        void eat();
        void sleep();
        virtual void play();    //声明为虚方法

protected:
        std::string name;
};

class Cat:public Pet
{
public:
        Cat(std::string theName);

        void climb();
        void play();
};

class Dog:public Pet
{
public:
        Dog(std::string theName);

        void bark();
        void play();
};

Pet::Pet(std::string theName)
{
        name = theName;
}

void Pet::eat()
{
        std::cout << name << "eating" << "\n";
}

void Pet::sleep()
{
        std::cout << name << "sleeping" << "\n";
}

void Pet::play()
{
        std::cout << name << "playing" << "\n";
}

Cat::Cat(std::string theName):Pet(theName)
{
}

void Cat::climb()
{
        std::cout << name << " climbing the tree \n " ;
}

void Cat::play()
{
        Pet::play();
        std::cout << name << " palying ball \n";
}

Dog::Dog(std::string theName):Pet(theName)
{
}

void Dog::play()
{
        Pet::play();
        std::cout << name << " runing \n";
}

void Dog::bark()
{
        std::cout << name << " barking \n";
}


int main()
{
        Pet *cat = new Cat("加菲");
        Pet *dog = new Dog("欧迪");

        cat -> sleep();
        cat -> eat();
        cat -> play();

        dog -> sleep();
        dog -> eat();
        dog -> play();

        delete cat;
        delete dog;

        return 0;
}
