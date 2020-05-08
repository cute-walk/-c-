//求数组内所有元素之和

#include <iostream>
//using namespace std;

int add_array(int *array, int n )
{
        int sum = 0;
        int i;

        for (i=0; i<n; i++)
        {
                sum += array[i];
        }
        return sum;
}

int main()

{
        int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int size = sizeof(data) / sizeof(data[0]);

        std::cout<< "结果是：" << add_array(data, size) << std::endl;

        return 0;
}
