// Leetcode Link : https://leetcode.com/problems/find-and-replace-pattern/description/
// words = ["abc","deq","mee","aqq","dkd","ccc"] pattern = "abb"
// Output: [mee, aqq] ( Since mee -> abb && aqq -> abb)


#include<bits/stdc++.h>
using namespace std;
void mapped(string &s)
{
    char mapping[256]={0};
    char start='a';
    for(auto ch : s)
    {
        if(mapping[ch]==0)
        {
            mapping[ch]=start;
            start++;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        char curr=s[i];
        s[i]=mapping[curr];
    }
}
vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    mapped(pattern);
    vector<string> ans;
    for(int i=0;i<words.size();i++)
    {
        string curr=words[i];
        mapped(curr);
        if(pattern==curr)
        {
            ans.push_back(words[i]);
        }
    }
    return ans;
}
int main()
{
  vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
  string pattern = "abb";
  vector<string> res=findAndReplacePattern(words,pattern);
  for(int i=0; i<res.size();i++)
  {
      cout<<res[i]<<" ";
  }
}
