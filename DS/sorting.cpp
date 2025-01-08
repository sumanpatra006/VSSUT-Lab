#include <iostream>
using namespace std;

void display(int arr[], int length);

void bubbleSort(int arr[], int length)
{
    int pass = 1;
    for (int turn = 0; turn < length - 1; turn++)
    {
        for (int i = 0; i < length - turn - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                cout << "pass - " << pass << " : ";
                display(arr, length);
                cout << "\n";
                pass++;
            }
        }
    }
    display(arr, length);
    cout << "\n";
}

void selectionSort(int arr[], int length)
{
    int pass = 1;
    for (int i = 0; i < length - 1; i++)
    {
        int minPos = i;
        for (int j = i + 1; j < length; j++)
        {
            minPos = arr[minPos] < arr[j] ? minPos : j;
        }
        if (minPos != i)
        {
            int temp = arr[i];
            arr[i] = arr[minPos];
            arr[minPos] = temp;
            cout << "pass - " << pass << " : ";
            display(arr, length);
            cout << "\n";
            pass++;
        }
    }
    display(arr, length);
    cout << "\n";
}

void display(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int length = 6;
    int arr[length] = {5, 11, 7, 2, 18, 3};
    // bubbleSort(arr, length);
    selectionSort(arr, length);
}