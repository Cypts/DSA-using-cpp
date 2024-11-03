#include <iostream>
using namespace std;
void displayarray(int array[], int size)
{
    for (int i = 0; i != size; i++)
    {
        cout << array[i] << "\t";
    }
}
int main()
{
    int array[] = {8, 2, 5, 10, 3};
    int size = sizeof(array) / sizeof(int);
    cout << " Array before swap: ";
    displayarray(array, size);
    for (int j = 0; j != size; j++)
    {
        for (int i = 0; i != size - j; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp;
                temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
            }
        }
    }
    cout << "\n Array after swap: ";
    displayarray(array, size);
}