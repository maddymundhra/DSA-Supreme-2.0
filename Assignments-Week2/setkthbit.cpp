// Set the Kth bit
// Suppose n=10 (binary: 1010) k=2 (binary: 0010)
// Set the 2th bit of n i.e 1110
// Output: 14
#include<bits/stdc++.h>
using namespace std;
int setKthbit(int num,int k)
{
    int mask= 1<<k; // Create a mask with k
    return (num) | (mask);
}
int main()
{
    int num;
    cin>>num;
    int k;
    cin>>k;
    cout<<setKthbit(num,k)<<endl;
}
