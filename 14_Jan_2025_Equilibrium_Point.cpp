#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum=0, prefix=0;
        for (int i: arr) sum+=i;
        for (int i=0; i<arr.size(); i++) {
            if (prefix == (sum-prefix-arr[i])) return i;
            prefix += arr[i];
        } return -1;
    }
};