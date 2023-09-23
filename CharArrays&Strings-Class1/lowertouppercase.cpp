// Covert lowerCase to upperCase


#include<bits/stdc++.h>
using namespace std;
void upperCaseMethod1(char ch[], int len)
{
    for(int i=0;i<len;i++)
    {
        char currChar=ch[i];
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=currChar-'a'+'A';
        }
    }
}
void upperCaseMethod2(char ch[], int len)
{
    for(int i=0;i<len;i++)
    {
        if(ch[i]>=97 && ch[i]<=122)
        {
            ch[i]-=32;
        }
    }
}
int main()
{
    char ch[100];
    cin >> ch;
    int len = strlen(ch);
    cout<<"Before UpperCase : "<<ch<<endl;
    upperCaseMethod2(ch,len);
    cout<<"After UpperCase : "<<ch<<endl;
}
