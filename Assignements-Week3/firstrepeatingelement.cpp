// GFG Link: https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1

#include<bits/stdc++.h>
using namespace std;
int firstRepeatingElement(int nums[], int n)
{
    unordered_map<int,int> mp;
    
    // Marking the frequencies of all elements
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }
    
    // Checking the first element whose frequency is greater than 1
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(mp[nums[i]]>1)
        {
            ans=i+1; // Returning the index as 1-based indexing
            break;
        }
    }
    return ans;
}
int main()
{
    int nums[]={1, 5, 3, 4, 3, 5, 6};
    int n=7;
    int ans = firstRepeatingElement(nums,n);
    cout<<ans<<endl;
}
