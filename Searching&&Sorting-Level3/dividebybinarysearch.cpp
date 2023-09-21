// Division of a number by another number using binary search
// divisor = 7  dividend = 29
// ans = 4

#include<bits/stdc++.h>
using namespace std;
int dividebyBinarySearch(int divisor, int dividend)
{
    int start=0;
    int end=dividend;
    long long int mid;
    int ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(divisor*mid==dividend)
        {
            return mid;
        }
        else if(divisor*mid<dividend)
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
    int divisor,dividend;
    cin>>divisor;
    cin>>dividend;
    int ans=dividebyBinarySearch(divisor,dividend);
    cout<<ans<<endl;
}
