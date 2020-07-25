//
// null指针，当把一个指针变量设置为null时，它的含义是那个指针将不再指向任何有意义的地址。

#include<iostream>
#include<string>

class Company
{
public:
        Company(std::string theName);
        virtual void printInfo();

protected:
        std::string name;
};


class TechCompany : public Company
{
public:
        TechCompany(std::string theName, std::string product);
        virtual void printInfo();

private:
        std::string product;
};

Company::Company(std::string theName)
{
        name = theName;
}


void Company::printInfo()
{
        std::cout << "The name of the company is " << name << ". \n";
}


TechCompany::TechCompany(std::string theName, std::string product):Company(theName)
{
        this->product = product;
}


void TechCompany::printInfo()
{
        std::cout << name << " product many of " << product << " something! \n";
}


int main()
{
        Company *company = new Company("apple");
        company->printInfo();

        delete company;

        company = NULL;

        company = new TechCompany("apple", "iphone");
        company->printInfo();

        delete company;
        company = NULL;

        return 0;
}
