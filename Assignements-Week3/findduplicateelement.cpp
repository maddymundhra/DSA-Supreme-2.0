// Leetcode Link: https://leetcode.com/problems/find-the-duplicate-number/description/
// Given an array of size n+1 which has elements in range [1,n]. Find the one with duplicate occurence.


#include <bits/stdc++.h>
using namespace std;
int duplicateElementmethod1(int nums[], int n){
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int index=abs(nums[i]);
        
        // Mark it visited
        if(nums[index]<0)
        {
            ans=index;
            break;
        }
        nums[index]*=-1;
    }
    return ans;
}
int duplicateElementmethod2(int nums[], int n){
    while(nums[0]!=nums[nums[0]])
    {
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
}
int main()
{
    int nums[]={1,3,4,4,2};
    int n=5;
    int ans= duplicateElementmethod2(nums,n);
    cout<<ans<<endl;
}
