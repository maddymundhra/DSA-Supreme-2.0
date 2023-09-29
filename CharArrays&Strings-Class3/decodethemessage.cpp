// Leetcode Link : https://leetcode.com/problems/decode-the-message/description/
// Given,  string key = "the quick brown fox jumps over the lazy dog" string message = "vkbs bs t suepuv";
// Output: this is a secret 

#include<bits/stdc++.h>
using namespace std;
string decodeMessage(string message, string key)
{
    char start = 'a';
    char mapping[256]={0};
    for(auto ch: key)
    {
        if(ch!=' ' && mapping[ch]==0)
        {
            mapping[ch]=start;
            start++;
        }
    }
    string ans="";
    for(auto ch: message)
    {
        if(ch==' ')
        {
            ans.push_back(' ');
        }
        else
        {
            ans.push_back(mapping[ch]);
        }
    }
    return ans;
}
int main()
{
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    string ans = decodeMessage(message,key);
    cout<<ans<<endl;
}
