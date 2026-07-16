class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        vector<vector<int>> freqs (nums.size() + 1);
        vector<int> topFreq;
        for(int i : nums) {
            um[i]++;
        }
        for(const auto& [val, freq] : um) {
            freqs[freq].push_back(val);
        }
        
        int i = 1;
        for (int i = freqs.size() - 1; i >= 0 && k > 0; i--) {
            for(int j = 0; j < freqs[i].size() && k > 0; j++) {
                topFreq.push_back(freqs[i][j]);
                k--;
            }
        }
        return topFreq;
    }
};
