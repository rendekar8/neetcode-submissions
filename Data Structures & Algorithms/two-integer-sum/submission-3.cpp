class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        vector<int> indi;
        for(int i = 0; i < nums.size(); i++) {
            int curInt = nums[i];
            int compInt = target - nums[i];
            if(um.contains(compInt) && um[compInt] != i) {
                indi.push_back(um[compInt]);
                indi.push_back(i);
            }
            um[nums[i]] = i;
        }
        return indi;

    }
};
