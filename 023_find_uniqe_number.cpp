#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,4,5,4,1,2};
    int size=sizeof(array)/sizeof(int);
    // for(int i=0;i!=size;i++)
    // {
    //     int count=0;
    //     for(int j=i+1;j!=size;j++)
    //     {
    //         if(array[i]==array[j])
    //             count++;
    //     }
    //     if(count==0)
    //     {
    //         cout<<"Your unique no is "<<array[i];
    //         break;
    //     }
    // }
    //methord 2;
    int ans =0;
    for(int i=0;i!=size;i++)
    {
        ans=ans^array[i];
    }
    cout<<"Uniqe element is "<<ans;
}