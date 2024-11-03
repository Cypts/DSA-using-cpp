#include <iostream>
using namespace std;
void displayArray(int array[], int size)
{
    for (int i = 0; i != size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[] = {4, 3, 2, 1};
    int size = sizeof(array) / sizeof(int);
    cout << "Array before sorting: ";
    displayArray(array,size);
    for (int i = 0; i != size; i++)
    {
        int min=i;
        for (int j = i + 1; j != size; j++)
        {
            if(array[min]>array[j])
              {
                min=j;
              }
        }
        if(min!=i)
        {
           int temp=array[i];
           array[i]=array[min];
           array[min]=temp;
        }
    }
    cout << "\nArray after sorting: ";
    displayArray(array, size);
}

