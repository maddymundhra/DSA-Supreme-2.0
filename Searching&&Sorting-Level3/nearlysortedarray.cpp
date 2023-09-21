// Search in a nearly sorted array where elements are placed in exact position as sorted array or adjacent positions.
// Indexes can be: i,i+1,i-1

#include<bits/stdc++.h>
using namespace std;
int searchNearlySortedArray(int arr[],int n, int target){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid>=0 && arr[mid-1]==target)
        {
            return mid-1;
        }
        if(arr[mid]==target)
        {
            return mid;
        }
        if(mid+1<n && arr[mid+1]==target)
        {
            return mid+1;
        }
        if(target>arr[mid])
        {
            start=mid+2;
        }
        else
        {
            end=mid-2;
        }
    }
    return -1;
}
int main()
{
   int arr[] =  {10, 3, 40, 20, 50, 80, 70};
   int n=7;
   int target=70;
   int ans=searchNearlySortedArray(arr,n,target);
   cout<<ans<<endl;
}
