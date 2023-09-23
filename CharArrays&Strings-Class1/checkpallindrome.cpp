// A pallindrome is a string which give same string when inverted

#include<bits/stdc++.h>
using namespace std;
bool checkPallindrome(char ch[], int len)
{
   int left=0;
   int right=len-1;
   bool ans=true;
   while(left<=right)
   {
       if(ch[left]!=ch[right])
       {
           ans=false;
           break;
       }
       left++;
       right--;
   }
   return ans;
}
int main()
{
    char ch[100];
    cin >> ch;
    int len = strlen(ch);
    if(checkPallindrome(ch,len))
    {
        cout<<"Valid"<<endl;
    }
    else
    {
       cout<<"Invalid"<<endl;
    }
}
