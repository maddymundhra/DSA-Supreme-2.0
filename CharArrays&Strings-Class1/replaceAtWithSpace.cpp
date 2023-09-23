// Replace @ with ' ' in the string

#include<bits/stdc++.h>
using namespace std;
void replaceAtWithSpace(char ch[], int len)
{
   for(int i=0;i<len;i++)
   {
       if(ch[i]=='@')
       {
           ch[i]=' ';
       }
   }
}
int main()
{
    char ch[100];
    cin >> ch;
    int len = strlen(ch);
    cout<<"Before Replace : "<<ch<<endl;
    replaceAtWithSpace(ch,len);
    cout<<"After Replace : "<<ch<<endl;
}
