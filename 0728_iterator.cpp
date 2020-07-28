#include<iostream>
#include<string>
#include<vector>

int main()
{
        std::vector<std::string> names;

        names.push_back("Tom");
        names.push_back("Jerry");

        std::vector<std::string>::iterator iter = names.begin();

        while (iter != names.end())
        {
                std::cout << *iter << std::endl;
                iter++;
        }


        return 0;

}
