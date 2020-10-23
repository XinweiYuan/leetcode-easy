class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int key = nums[0];
        int count = 0;
        int re = 0;
        for(auto i : nums){
            if(i == key){
                ++count;
            }else{
                re += count >= 2 ? count*(count-1)/2 : 0;
                // re += count*(count-1)/2;
                count = 1;
                key = i;
            }
        }
        re += count >= 2 ? count*(count-1)/2 : 0;
        return re;
    }
};
