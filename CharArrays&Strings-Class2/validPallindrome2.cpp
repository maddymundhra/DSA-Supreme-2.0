// Leetcode Link: https://leetcode.com/problems/valid-palindrome-ii/description/
// Check whether a string can be made a pallindrome after removing a single element
// Eg: s = "abca"
// After removing 'c', we can make a pallindrome i.e "aba"
// Output: "true"


#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome (string s, int left, int right)
{
    while(left<=right)
    {
        if(s[left]!=s[right])
        {
            return false;
        }
        else
        {
            left++;
            right--;
        }
    }
    return true;
}
bool validPalindrome2(string s)
{
    int left=0;
    int right=s.length()-1;
    
    while(left<=right)
    {
        if(s[left]==s[right])
        {
            left++;
            right--;
        }
        else
        {
            bool ans1=checkPalindrome(s,left+1,right);
            bool ans2=checkPalindrome(s,left,right-1);
            return ans1||ans2;
        }
    }
    return true;
}
int main()
{
    string s = "abca";
    bool ans=validPalindrome2(s);
    cout<<ans<<endl;
}
