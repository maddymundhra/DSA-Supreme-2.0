// Count all set bits in a number
// Example: n=10
// Binary of n= 1010
// Ans: setbits = 2;


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bit;
    int count=0;
    while(n>0)
    {
        bit=(n&1);
        if(bit==1)
        {
            count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;
}

// ALTERNATE WAY

/*
while(n>0)
    {
        bit=n%2;
        if(bit==1)
        {
            count++;
        }
        n=n/2;
    }
*/
