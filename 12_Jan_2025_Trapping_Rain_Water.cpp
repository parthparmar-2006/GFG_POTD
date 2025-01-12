#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size(), total=0;
        int rh=0, lh=0;
        vector<int> right(n, 0);
        for (int i=n-1; i>=0; i--) {
            right[i] = rh;
            rh = max(rh, arr[i]);
        }
        for (int i=0; i<n; i++) {
            int h=min(lh, right[i]);
            lh = max(lh, arr[i]);
            if (h > arr[i]) {        
                total += (h - arr[i]);
            }
        } return total;
    }
};