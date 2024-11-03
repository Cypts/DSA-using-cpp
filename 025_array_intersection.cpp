#include<iostream>
using namespace std;
int main()
{
    int array1[]={1,2,3,4,6,7};
    int array2[]={1,2,8,9,4,7,6};
    int size1=sizeof(array1)/sizeof(int);
    int size2=sizeof(array2)/sizeof(int);
    
    for(int i=0;i!=size1;i++)
    {
        for(int j=0;j!=size2;j++)
        {
            if(array1[i]==array2[j])
                {
                     cout<<array1[j]<<" is a duplicate"<<endl;
                     break;
                }

        }
    }
}