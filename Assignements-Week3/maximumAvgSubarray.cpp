// Leetcode Link : https://leetcode.com/problems/maximum-average-subarray-i/description/

#include<bits/stdc++.h>
using namespace std;
double findMaxAverage(int nums[], int k, int n) {
        int i=0;
        int j=k-1;
        int sum=0;
        for(int start=i;start<=j;start++)
        {
         sum+=nums[start];
        }
        int maxSum=sum;
        j++;
        while(j<n)
        {
            sum-=nums[i++];
            sum+=nums[j++];
            maxSum=max(maxSum,sum);
        }
        double maxAvg = maxSum/(double)k;
        return maxAvg;
    }
int main()
{
    int nums[] = {1,12,-5,-6,50,3};
    int n=6;
    int k=4;
    double ans=findMaxAverage(nums,k,n);
    cout<<ans<<endl;
}
