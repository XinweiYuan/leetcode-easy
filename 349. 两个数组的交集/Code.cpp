class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> rlt;
        set<int> s1;
        set<int> s2;
        for (auto i : nums1)
             s1.insert(i);
         for (auto i : nums2) 
             s2.insert(i);
         for (auto i : s2) {
             if (s1.find(i) != s1.end())
                 rlt.push_back(i);
         }
         return rlt;
       
    }
};
