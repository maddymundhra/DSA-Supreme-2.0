// GFG Link: https://practice.geeksforgeeks.org/problems/common-elements1132/1

// Given 3 sorted arrays ar1, ar2 and ar3.
// You need to find the common elements in all the 3 arrays



#include<bits/stdc++.h>
using namespace std;
void commonElements(int A[],int B[],int C[], int n1, int n2, int n3)
{
            int i=0;
            int j=0;
            int k=0;
            vector<int> ans;
            set<int> s;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    s.insert(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j])
                {
                    i++;
                }
                else if(B[j]<C[k])
                {
                    j++;
                }
                else
                {
                    k++;
                }
            }
            for(auto it: s)
            {
                ans.push_back(it);
            }
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
}
int main()
{
    int ar1[] = { 1, 5, 10, 20, 40, 80 };
    int ar2[] = { 6, 7, 20, 80, 100 };
    int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
    int n1=6;
    int n2=5;
    int n3=8;
    commonElements(ar1,ar2,ar3,n1,n2,n3);
}
