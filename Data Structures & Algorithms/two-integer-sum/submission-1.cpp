class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int > hmap;
        for(int i = 0; i< nums.size();i++){
            if(hmap.find(nums[i]) == hmap.end()){
                hmap[target - nums[i]] = i;
            }
            else{
                return {hmap[nums[i]],i};
            }
        }
        return {0,0};
    }
};
// [-1,-2,-3,-4,-5] -8

// -7: 0


 