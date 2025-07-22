class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, pre = 0, suf = 0;
        for (int i = 0; i < nums.size(); i++) sum += nums[i];
        for (int i = 0; i < nums.size(); i++) {
            suf = sum - pre - nums[i];
            if (pre == suf) return i;
            pre += nums[i];
        }
        return -1;
    }
};
