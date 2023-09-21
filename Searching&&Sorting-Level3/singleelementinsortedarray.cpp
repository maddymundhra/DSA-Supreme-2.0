// Search a single element in a sorted array
// Brief: An array contain elements in pair except a single element. You need to return single element.
// Eg: A[]={3,3,7,7,10,11,11}
// Output: 10

#include<bits/stdc++.h>
using namespace std;
int singleElementinSortedArray(int A[], int n){
    int start=0;
    int end=n-1;
    int mid;
    int ans;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(start==end)
        {
            return A[start];
        }
        if(mid%2==0)
        {
            if(mid+1<n && A[mid+1]==A[mid])
            {
                start=mid+2;
            }
            else
            {
                end=mid;
            }
        }
        else
        {
            if(mid-1>=0 && A[mid-1]==A[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int A[] = {3,3,7,7,10,11,11};
    int n=7;
    int ans = singleElementinSortedArray(A,n);
    cout<<ans<<endl;
}
