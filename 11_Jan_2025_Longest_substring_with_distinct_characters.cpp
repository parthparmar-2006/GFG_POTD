#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int ans=0, cnt=0, prev=0;
        unordered_map<char, int> mp;
        for (int i=0; i<s.size(); i++) {
            if (mp.find(s[i])==mp.end() || mp[s[i]]<prev) {
                cnt++;
            } else {
                ans = max(ans, cnt);
                cnt -= (mp[s[i]]-prev-1);
                prev = mp[s[i]];
            } mp[s[i]] = i+1;
        } return max(ans, cnt);
    }
};