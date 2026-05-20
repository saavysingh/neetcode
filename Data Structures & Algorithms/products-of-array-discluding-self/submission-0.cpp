class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> lp(n,1);
        vector<int> rp(n,1);
        lp[0] = INT_MAX;
        lp[1] = nums[0];
        rp[n-1] = INT_MAX;
        rp[n-2] = nums[n-1];
        for(int i = 2;i<n;i++){
            lp[i] = lp[i-1] * nums[i-1];
        }
        for(int i = n-3 ; i>=0;i--){
            rp[i] = rp[i+1] * nums[i+1];
        }

        for (int i = 1 ;i<n-1;i++){
            rp[i] = rp[i] * lp[i];
        }
        rp[n-1] = lp[n-1];
        return rp;
    }
};


// [1,2,4,6]
// [INT_MAX,1,2,8] -> each element represents left product of that number.
// [48,24,6,INT_MAX] -> right product

// [right prod, rXl  ,left prod]

