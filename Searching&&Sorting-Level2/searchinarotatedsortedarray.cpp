// Leetcode Link: https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/1054537478/

#include<bits/stdc++.h>
using namespace std;
int pivotIndex(int A[], int n)
{
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(A[mid]>A[mid+1])
        {
            return mid;
        }
        else if(A[mid-1]>A[mid])
        {
            return mid-1;
        }
        else if(A[start]>A[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}
int binarySearch(int A[],int start, int end, int target)
{
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(A[mid]==target)
        {
            return mid;
        }
        else if(A[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int searchRotatedArrayIndex(int A[], int n, int target)
{
    int pivotElement=pivotIndex(A,n);
    int ans;
    if(target>=A[0] && target<=A[pivotElement])
    {
        ans=binarySearch(A,0,pivotElement,target);
    }
    else
    {
        ans=binarySearch(A,pivotElement+1,n-1,target);
    }
    return ans;
}
int main()
{
    int A[]={12,14,16,2,4,6,8,10};
    int n=sizeof(A)/sizeof(int);
    int ans=searchRotatedArrayIndex(A,n,6);
    cout<<ans<<endl;
}
