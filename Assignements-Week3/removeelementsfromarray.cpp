// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

// Given, array is {0,0,1,1,1,2,2,3,3,4}
// Output: 5 
// Reason: After removing elements the array is {0,1,2,3,4}

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n) {
        int i=1;
        int j=0;
        while(i<n)
        {
            if(arr[j]==arr[i])
            {
                i++;
            }
            else
            {
                j++;
                arr[j]=arr[i];
                i++;
            }
        }
        return j+1;
    }
int main()
{
    int arr[]={0,0,1,1,1,2,2,3,3,4};
    int n=10;
    int ans=removeDuplicates(arr,n);
    cout<<ans<<endl;
}
