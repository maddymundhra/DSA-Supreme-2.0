// Leetcode Link: https://leetcode.com/problems/palindromic-substrings/
// Eg: s = "aaa"
// Output: 6 (a,a,a,aa,aa,aaa)

#include<bits/stdc++.h>
using namespace std;
int expand(string s, int i, int j) {
       int count=0;
       while(i>=0 && j<=s.length()-1 && s[i]==s[j])
       {
           count++;
           i--;
           j++;
       }
       return count;
}
int countSubstrings(string s) {
        int totalCount=0;
       
        for(int centre=0;centre<s.length();centre++)
        {
            // ODD CASE
            int oddCase = expand(s,centre,centre);

            // EVEN CASE
            int evenCase = expand(s,centre,centre+1);

            // TOTAL COUNT
            totalCount = totalCount + oddCase + evenCase;
        }
        return totalCount;
}
int main()
{
    string s = "aaa";
    int ans=countSubstrings(s);
    cout<<ans<<endl;
}
