// Leetcode Link : https://leetcode.com/problems/search-a-2d-matrix/

#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(int A[3][4], int target,int row, int col)
{
   int rows=row;
   int cols=col;
   int start=0;
   int n=rows*cols;
   int end=n-1;
   int mid;
   int currentNum;
   while(start<=end)
   {
       mid=start+(end-start)/2;
       int rowIndex=mid/cols;
       int colIndex=mid%cols;
       int currNum=A[rowIndex][colIndex];
       if(currNum==target)
       {
           return true;
       }
       else if(currNum<target)
       {
           start=mid+1;
       }
       else
       {
           end=mid-1;
       }
   }
   return false;
}
int main()
{
    int A[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int row=3;
    int col=4;
    int target=17;
    bool res=searchMatrix(A,target,row,col);
    cout<<res<<endl;
}
