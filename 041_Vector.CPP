#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int size=nums.size();
        int j=0;
        for(auto i = nums.begin();i!=nums.end();i++)
        {
            if(val==*i)
            {
                nums.erase(i);
                j++;
                nums.resize(size-j);
            }
        }
        return 0;
        
    }
int main()
{
    vector<int> v={1,2,2,2,4,5,6};
    removeElement(v,2);
    for( auto i =v.begin();i!=v.end();i++ )
       cout<<*i;
    
}
// int main()
// {
//     vector<int> v;
//     for( int i =1; i !=6;i++)
//     {
//         v.push_back(i);
//     }
//     for( auto i =v.begin();i!=v.end();i++ )
//     {
//         if(*i==5)
//             v.erase(i);
//         v.resize(4);
//     }
//     for( auto i =v.begin();i!=v.end();i++ )
//         cout<<*i;
// }