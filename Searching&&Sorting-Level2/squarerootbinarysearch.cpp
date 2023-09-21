// Leetcode Link: https://leetcode.com/problems/sqrtx/description/

#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n)
{
    int start=0;
    int end=n;
    long long int mid;
    int ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ans=squareRoot(n);
    cout<<ans<<endl;
}
