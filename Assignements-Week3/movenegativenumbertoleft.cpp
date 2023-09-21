// Given, an array with a mix of -ve and +ve numbers.
// Shift all the -ve numbers to the left side of the array.
// Note: order doesn't matter for the shifting.

#include <iostream>
using namespace std;
void moveNegatives(int A[], int n){
        int left=0;
        int right=n-1;
        while(left<right)
        {
            if(A[left]<0)
            {
                left++;
            }
            else if(A[right]>0)
            {
                right--;
            }
            else
            {
                swap(A[left],A[right]);
            }
        }
 }
int main()
{
    int A[]={-12, 11, -13, -5, 
               6, -7, 5, -3, 11};
    int n=9;
    moveNegatives(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
