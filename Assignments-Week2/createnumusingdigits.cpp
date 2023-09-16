// Create number using digits
// Suppose n=5 represent the number of digits
// The digits are: 1, 2, 7, 5, 9
// The number is : 12759


#include<bits/stdc++.h>
using namespace std;
int numberFormed(int n)
{
    int num=0;
    for(int i=0;i<n;++i)
    {
        cout<<"Enter the digit :"<<endl;
        int digit;
        cin>>digit;
        num = num * 10 + digit;
        cout<<"The number formed till now: "<<num<<endl;
    }
}
int main()
{
  int n;
  cin>>n;
  numberFormed(n);
}
