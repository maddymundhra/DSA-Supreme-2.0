// Spiral Print of A matrix
// Given a matrix
// arr[4][4] = 1  2  3  4
//             5  6  7  8
//             9  10 11 12
//             13 14 15 16
// Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 

#include<bits/stdc++.h>
using namespace std;
void spiralPrint(int arr[4][4],int m, int n)
{
        int rows=m;
        int cols=n;
        int matrixSize=rows*cols;
        int startRow=0;
        int startCol=0;
        int endRow=rows-1;
        int endCol=cols-1;
        int count=0;
        int total_size=rows*cols;
        while(count<matrixSize)
        {
            // Starting row
            for(int i=startCol;i<=endCol && count<total_size;i++)
            {
                cout<<arr[startRow][i]<<" ";
                count++;
            }
            startRow++;

            // Ending Col
            for(int i=startRow;i<=endRow && count<total_size ;i++)
            {
                cout<<arr[i][endCol]<<" ";
                count++;
            }
            endCol--;

            // Ending Row
            for(int i=endCol;i>=startCol  && count<total_size ;i--)
            {
                cout<<arr[endRow][i]<<" ";
                count++;
            } 
            endRow--;

            // Starting Col
            for(int i=endRow;i>=startRow  && count<total_size ;i--)
            {
                cout<<arr[i][startCol]<<" ";
                count++;
            }
            startCol++;
        }
}
int main() {
    int arr[4][4] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 }
                      };
                      
                
    spiralPrint(arr,4,4);
}
