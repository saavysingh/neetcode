class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueSet;
        int n = nums.size();
        for(auto i : nums){
            if(uniqueSet.find(i) != uniqueSet.end()){
                return true;
            }
            uniqueSet.insert(i);
        }
        return false;
    }
};