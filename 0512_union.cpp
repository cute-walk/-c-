#include <iostream>

union mima
{
        unsigned long birthday;
        unsigned short ssn;
        char* pet;
};

int main()
{
        mima mima_1;

        mima_1.birthday = 19881301;
        std::cout << mima_1.birthday << std::endl;

        mima_1.pet = "chongwu";
        std::cout << mima_1.pet << std::endl;
        std::cout << mima_1.birthday << std::endl;

        return 0;
}
