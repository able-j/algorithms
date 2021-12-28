#include <iostream>

// O(n^2)

int main()
{
    int min;
    int index; 
    int temp;

    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for (int i = 0; i < 10; i++)
    {
        min = 9999;
        for (int j = i; j < 10; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << " ";
    }

    return 0;
}