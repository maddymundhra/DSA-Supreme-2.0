// Find the length of string stored in char array

#include<bits/stdc++.h>
using namespace std;
int findLength(char ch[], int n)
{
    int len=0;
    for(int i=0;i<100;i++)
    {
        if(ch[i]=='\0')
        {
            break;
        }
        len++;
    }
    return len;
}
int main()
{
    char ch[100];
    cin >> ch;
    int n=100;
    cout<<findLength(ch,n)<<endl;
}
