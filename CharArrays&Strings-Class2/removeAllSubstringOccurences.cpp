// Leetcode Link : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
// Eg: string s = "daabcbaabcbc" , part = "abc";
// After removing all occurences of "abc"
// Output: "dab"

#include<bits/stdc++.h>
using namespace std;
string removeAllSubstringOccurences(string s, string part)
{
  while(s.find(part)!=string::npos)
  {
      s.erase(s.find(part),part.length());
  }
  return s;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    string result = removeAllSubstringOccurences(s,part);
    cout<<result<<endl;
}
