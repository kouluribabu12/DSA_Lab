// Quick sort in C++

#include <iostream>
using namespace std;

#include <chrono>
using namespace std::chrono;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int partition(int array[], int low, int high)
{

    int pivot = array[high];

    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);

    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";
    printArray(data, n);

    auto start = high_resolution_clock::now();
    quickSort(data, 0, n - 1);
    auto stop = high_resolution_clock::now();

    cout << "Sorted array in ascending order: \n";
    printArray(data, n);

    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken is "
         << duration.count() << " microseconds" << endl;
}