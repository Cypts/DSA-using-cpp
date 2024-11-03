#include <iostream>
using namespace std;
void dispalyArray(int array[], int size)
{
    for (int i = 0; i != size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[] = {3, 2, 6, 1, 5};
    int size = sizeof(array) / sizeof(int);
    cout << "Array before sorting: ";
    dispalyArray(array, size);
    for (int i = 1; i != size; i++)
    {
        int temp = array[i];
        int j = i - 1;
        for (; j != -1; j--)
        {
            if (array[j] > temp)
                array[j + 1] = array[j];
            else
                break;
        }   
        
        array[j + 1] = temp;
    }
    cout << endl;

    dispalyArray(array, size);
}