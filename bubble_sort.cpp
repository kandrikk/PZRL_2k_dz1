#include <iostream>
#include <algorithm>

void bubblesort(int *arr, int n)
{
    int swap;
    for (int i = 0; i < n - 1; i++)
    {
        swap = 0;
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                std::swap(arr[j - 1], arr[j]);
                swap = 1;
            }
        }
        if (swap == 0) break;
    }
}

int main()
{
    int n;
    std:: cout << "Количество элементов массива : ";
    std::cin >> n;
    int *arr = new int [n];
    std:: cout << "Введите элементы массива : ";
    for (int i = 0; i < n; i++)
    {   
        std:: cin >> arr[i];
    }

    bubblesort(arr, n);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    delete[] arr;
    return 0;
}