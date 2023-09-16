// Print all the digits of a number
// N = 12345
// Output: 1,2,3,4,5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem;
    while(n>0)
    {
        rem=n%10;
        cout<<rem<<endl;
        n=n/10;
    }
}
