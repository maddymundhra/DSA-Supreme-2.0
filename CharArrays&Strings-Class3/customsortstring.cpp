// Leetcode Link : https://leetcode.com/problems/custom-sort-string/description/
// Eg: order = "cba" s="abcd"
// Output: cbad (Sorted string s based on the string order)

#include<bits/stdc++.h>
using namespace std;
string str;
bool compare(char ch1, char ch2)
{
    return (str.find(ch1) < str.find(ch2));
}
string customSortString(string order, string s)
{
    str=order;
    sort(s.begin(),s.end(),compare);
    return s;
}
int main()
{
    string order = "cba"; 
    string s = "abcd";
    string ans = customSortString(order,s);
    cout<<ans<<endl;
}
