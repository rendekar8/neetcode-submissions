class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int i : nums) {
            um[i]++;
        }
        int max = 0;
        for(int i : nums) {
            int count = 0;
            int curr = i;
            if(um[i - 1] == 0) {
                while(um[curr] != 0) {
                    count++;
                    curr++;
                }
                if(count > max) {max = count;}
            }
        }
        return max;
    }
};
