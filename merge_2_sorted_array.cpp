#include <iostream>
#include <vector>
using namespace std;
void Merge(int *arr;int s;int e)
{
    int mid = (s+e)/2;
    int l1=mid;
    int l2=e-mid+1;
    int *first=int new[l1];
    int *second=int new[l2];
    
}

// int main() {
//     vector<int> arr1 = {1, 3, 5, 7};
//     vector<int> arr2 = {2, 4, 6, 8, 10};
//     int n1 = arr1.size();
//     int n2 = arr2.size();
//     vector<int> Sorted(n1 + n2); // Resize vector to hold all elements

//     int i = 0, j = 0;
//     int k = 0;
    
//     while (i < n1 && j < n2) {
//         if (arr1[i] > arr2[j])
//             Sorted[k++] = arr2[j++];
//         else
//             Sorted[k++] = arr1[i++];
//     }
    
//     // Add remaining elements from arr1
//     while (i < n1) {
//         Sorted[k++] = arr1[i++];
//     }

//     // Add remaining elements from arr2
//     while (j < n2) {
//         Sorted[k++] = arr2[j++];
//     }

//     for (int l = 0; l < Sorted.size(); l++) {
//         cout << Sorted[l] << " ";
//     }
    
//     return 0;
// }
