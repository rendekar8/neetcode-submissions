class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umS;
        unordered_map<char, int> umT; 

        for(int i = 0; i < s.length(); i++) {
            char curChar = s.at(i);
            umS[curChar]++;
        }
        for(int i = 0; i < t.length(); i++) {
            char curChar = t.at(i);
            umT[curChar]++;
        }

        for(auto i : umS) {
            if(umT.contains(i.first)) {
                if(i.second != umT[i.first]) {
                    return false;
                }
            } else {
                return false;
            }
        }
        for(auto i : umT) {
            if(umS.contains(i.first)) {
                if(i.second != umS[i.first]) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};
