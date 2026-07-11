class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> um;

        for(int i : nums) {
            if(um[i] > 0) {
                return true;
            }
            else {
                um[i] = um[i] + 1;
            }
        }
        return false;
    }
};