#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int m = 0;
        int prefix = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for (int i=0; i<arr.size(); i++) {
            prefix += arr[i];
            if (mp.find(prefix-k) != mp.end()) {
                m = max(m, i-mp[prefix-k]);
            } 
            if (mp.find(prefix) == mp.end()) mp[prefix] = i;
        } return m;
    }
};