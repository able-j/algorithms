#include <iostream>

// O(n^2)
// average O(nlogn)

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int* data, int first, int last)
{
    if (first >= last) // if there is only one element in the subarray
    {
        return;
    }

    int pivot = first; // first element = pivot
    
    int i = first + 1;
    int j = last;
    int temp;

    while (i <= j) // until i and j point to same thing or if they are next to each other
    {
        while (data[i] <= data[pivot]) // move right until we hit a value greater than the pivot
        {
            i++;
        }
        while (data[j] >= data[pivot] && j > first) // move left until we hit a value less than the pivot
        {
            j--;
        }
        if (i > j) // swapping
        {
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }
        else
        {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }

    quickSort(data, first, j - 1);
    quickSort(data, j + 1, last);
}

int main()
{
    quickSort(data, 0, number - 1);

    for (int i = 0; i < 10; i++)
    {
        std::cout << data[i] << " ";
    }
}