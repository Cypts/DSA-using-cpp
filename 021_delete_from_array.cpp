#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    cout << "Your array is ";
    for (int i = 0; i != size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\nEnter position to delete ";
    int position;
    cin >> position;
    for (int i = position; i != size; i++)
    {                                  
        array[i - 1] = array[i];
    }
    cout << "Your array after deletion is ";
    for (int i = 0; i != size - 1; i++)
    {
        cout << array[i] << " ";
    }
}