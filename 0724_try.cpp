// 捕获异常
//

/*
 try
{
        //Do something;
        //Throw an exception on error;
}
catch
{
        //do wahtever;
}
*/

#include<iostream>
#include<climits>

unsigned long returnFactorial(unsigned short num) throw (const char *);

int main()
{
        unsigned short num = 0;

        std::cout << "Please input an int number: ";

        while (!(std::cin>>num) || (num < 1) )
        {
                std::cin.clear();
                std::cin.ignore(100, '\n');
                std::cout << "please input an int number again: ";

        }

        std::cin.ignore(100, '\n');

        try
        {
                unsigned long factorial = returnFactorial(num);
                std::cout << num << "! value is " << factorial << std::endl;
        }

        catch (const char *e)

        {
                std::cout << e;
        }

        return 0;
}

unsigned long returnFactorial(unsigned short num) throw (const char *)
{
        unsigned long sum = 1;
        unsigned long max = ULONG_MAX;

        for (int i=1; i<=num; i++)
        {       sum *= i;
                max /= i;
        }

        if (max < 1)
        {
        throw "The number is too bigger. \n";
        }
        else
        {
        return sum;
        }
}
