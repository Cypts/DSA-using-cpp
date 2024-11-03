#include <iostream>
using namespace std;
int main()
{
    int element;
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Enter the number to be found\t";
    cin >> element;
    bool found = 0;
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i != size; i++)
    {
        if (element == array[i])
        {
            found = 1;
            break;
        }
    }
    if (found == true)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}