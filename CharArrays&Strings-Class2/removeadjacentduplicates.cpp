// Leetcode Link : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
// Eg: string s = "abbaca"
// Output: "ca"

#include<bits/stdc++.h>
using namespace std;
string removeAdjacentDuplicate(string s)
{
    string ans="";
    int index=0;
    while(index<s.length())
    {
        if(ans.length()>0 && s[index]==ans[ans.length()-1])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}
int main()
{
    string s = "abbaca";
    string res=removeAdjacentDuplicate(s);
    cout<<res<<endl;
}
