// Wave print of a matrix
// For given array : 
// arr[5][4] = 1  2  3  4
//             5  6  7  8
//             9  10 11 12
//             13 14 15 16 
//             17 18 19 20
// Output: 1 5 9 13 17 18 14 10 6 2 3 7 11 15 19 20 16 12 8 4

#include<bits/stdc++.h>
using namespace std;
void wavePrint(int arr[5][4],int m, int n)
{
    for(int j=0;j<n;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<m;i++)
            {
                cout<<arr[i][j]<<" "; 
            }
        }
        else
        {
            for(int i=m-1;i>=0;i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main() {
    int arr[5][4] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 },
                      { 17, 18, 19, 20 } };
                      
                
    wavePrint(arr,5,4);
}
