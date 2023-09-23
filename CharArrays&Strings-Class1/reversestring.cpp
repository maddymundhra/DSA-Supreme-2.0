// Reverse a string

#include<bits/stdc++.h>
using namespace std;
void reverseString(char ch[], int len)
{
    int left=0;
    int right=len-1;
    while(left<=right)
    {
        swap(ch[left],ch[right]);
        left++;
        right--;
    }
}
int main()
{
    char ch[100];
    cin >> ch;
    int len = strlen(ch);
    cout<<"Before Reverse : "<<ch<<endl;
    reverseString(ch,len);
    cout<<"After Reverse : "<<ch<<endl;
}
