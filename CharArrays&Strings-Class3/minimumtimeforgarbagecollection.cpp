// Leetcode Link : https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/
// garbage = {"G","P","GP","GG"} travel = {2,4,3}
// Output: 21 
// 
// ( Pickup Time for G : 1 + 0 + 1 + 2 ; Pickup Time for P : 0 + 1 + 1 + 0 ; Pickup Time for M: 0 + 0 + 0 + 0 )
// ( Travel Time for G : 0 + 2 + 4 + 3 ; Travel Time for P : 0 + 2 + 4 ; Travel Time for M: 0 + 0 + 0 )


#include<bits/stdc++.h>
using namespace std;
int garbageCollection(vector<string>& garbage, vector<int>& travel)
{
    // Pickup Time
    int pickP=0;
    int pickG=0;
    int pickM=0;
    
    // Last occurence
    int lastP=0;
    int lastG=0;
    int lastM=0;
    
    // Travel Time
    int travelP=0;
    int travelG=0;
    int travelM=0;
    
    for(int i=0;i<garbage.size();i++)
    {
        string curr=garbage[i];
        for(int j=0;j<curr.length();j++)
        {
            if(curr[j]=='P')
            {
                pickP++;
                lastP=i;
            }
            if(curr[j]=='G')
            {
                pickG++;
                lastG=i;
            }
            if(curr[j]=='M')
            {
                pickM++;
                lastM=i;
            }
        }
    }
    for(int i=0;i<lastP;i++)
    {
        travelP+=travel[i];
    }
    for(int i=0;i<lastG;i++)
    {
        travelG+=travel[i];
    }
    for(int i=0;i<lastM;i++)
    {
        travelM+=travel[i];
    }
    int total_time = (pickP + travelP) + (pickM + travelM) + (pickG + travelG);
    return total_time;
}
int main()
{
  vector<string> garbage = {"G","P","GP","GG"};
  vector<int> travel = {2,4,3};
  int ans=garbageCollection(garbage,travel);
  cout<<ans<<endl;
}
