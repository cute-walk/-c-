#include<iostream>
#include<string>
#include<vector>

int main()
{
        std::vector<std::string> names;

        names.push_back("Tom");
        names.push_back("Jerry");

        for (int i=0;  i<names.size(); i++)
        {
                std::cout << names[i] << std::endl;
        }

        return 0;

}
