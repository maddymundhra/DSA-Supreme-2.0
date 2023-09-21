// Leetcode Link : https://leetcode.com/problems/missing-number/description/

#include <iostream>
using namespace std;
int missingNumber(int A[], int n){
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans^=A[i];
        }
        for(int i=0;i<=n;i++)
        {
            ans^=i;
        }
        return ans;
 }
int main()
{
    int A[]={9,6,4,2,3,5,7,0,1};
    int n=9;
    int ans=missingNumber(A,n);
    cout<<ans<<endl;
}
