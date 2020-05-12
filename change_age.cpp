#include <iostream>

void changeAge(int *age, int newAge);

int main()
{
        int age = 24;
        std::cout << "my age is " << age << std::endl;

        changeAge(&age, age + 1);

        std::cout << "now my age is " << age << std::endl;

}

void changeAge(int *age, int newAge)

{
        *age = newAge;
        std::cout << "in this, my age is " << *age << std::endl;
}
