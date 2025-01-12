#include<bits/stdc++.h>
using namespace std;
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int maxi = INT_MIN, left=0, right=arr.size()-1;
        while (left<=right) {
            maxi = max((right-left)*min(arr[left], arr[right]), maxi);
            if (arr[left]<arr[right]) left++;
            else right--;
        } return maxi;
    }
};