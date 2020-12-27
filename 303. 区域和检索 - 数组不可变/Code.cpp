class NumArray {
public:
    NumArray(vector<int>& nums) {
        for (auto i : nums)
            priNums.push_back(i);
    }
    
    int sumRange(int i, int j) {
        int sum(0);
        while (i <= j) {
            sum += priNums[i];
            ++i;
        }
        return sum;
    }
private:
    vector<int> priNums;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
