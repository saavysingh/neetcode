class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> lp(n,1);
        lp[1] = nums[0];
        for(int i = 2;i<n;i++){
            lp[i] = lp[i-1] * nums[i-1];
        }
        int rp = nums[n-1];
        for(int i = n-2; i>=0;i--){
            lp[i] = lp[i] * rp;
            rp = rp * nums[i];
        }
        return lp;
    }
};


// [1,2,4,6]
// [abc,1,12,8] -> each element represents left product of that number.
// [48,24,6,INT_MAX] -> right product

// [right prod, rXl  ,left prod]

