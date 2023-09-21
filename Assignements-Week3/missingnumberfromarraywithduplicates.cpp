// 

#include<bits/stdc++.h>
using namespace std;
void MissingNumbersMethod1(int nums[], int n)
{
    for(int i=0;i<n;i++)
    {
        int index=abs(nums[i]);
        
        if(nums[index-1]>0)
        {
            nums[index-1]*=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0)
        {
            cout<<i+1<<" ";
        }
    }
}
void MissingNumbersMethod2(int nums[], int n)
{
    int i=0;
    while(i<n)
    {
        int index = nums[i] - 1;
        if(nums[i]!=nums[index])
        {
            swap(nums[i],nums[index]);
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]!=i+1)
        {
         cout<<i+1<<" ";   
        }
    }
}
int main()
{
    int nums[]={1,3,3,3,4};
    int n=5;
    MissingNumbersMethod2(nums,n);
}
