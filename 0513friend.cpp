//友元关系是类之间的一个特殊关系，允许友元类访问对象中的public、protected和private。
//firend class classname;


#include <iostream>
#include <string>

class Lovers
{
public:
        Lovers(std::string theName);
        void kiss(Lovers *lover);
        void ask(Lovers *lover, std::string something);

protected:
        std::string name;
        friend class Others;
};


class Boyfriend:public Lovers
{
public:
        Boyfriend(std::string theName);
};

class Girlfriend:public Lovers
{
public:
        Girlfriend(std::string theName);
};


class Others
{
public:
        Others(std::string theName);
        void kiss(Lovers *lover);
protected:
        std::string name;
};

Lovers::Lovers(std::string theName)
{
        name = theName;
}

void Lovers::kiss(Lovers *lover)
{
        std::cout << name << "kiss " << lover->name << std::endl;
}

void Lovers::ask(Lovers *lover, std::string something)
{
        std::cout << "ask " << lover->name << "去做 " << something << std::endl;
}

Boyfriend::Boyfriend(std::string theName):Lovers(theName)
{
}

Girlfriend::Girlfriend(std::string theName):Lovers(theName)
{
}

Others::Others(std::string theName)
{
        name = theName;
}

void Others::kiss(Lovers *lover)
{
        std::cout << name << "kiss" << lover->name << std::endl;
}


int main()
{
        Boyfriend boyfriend("a");
        Girlfriend girlfriend("b");

        Others others("c");

        girlfriend.kiss(&boyfriend);
        girlfriend.ask(&boyfriend, "eat");

        std::cout << "c，登场" << std::endl;

        others.kiss(&girlfriend);

        return 0;
}
