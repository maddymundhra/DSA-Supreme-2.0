class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0;
        int end=n-1;
        int mid;
        while(start<end)
        {
          mid=start+(end-start)/2;
          if(arr[mid]<arr[mid+1])
          {
            start=mid+1;
          }
          else
          {
            end=mid;
          }
        }
        return start;
    }
};
