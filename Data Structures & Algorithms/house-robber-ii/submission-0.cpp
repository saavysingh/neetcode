class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        if(n == 2){
            return max(nums[0],nums[1]);
        }
        if(n == 3){
            return max(nums[0], max(nums[1],nums[2]));
        }
        vector<int> dp(n,0);
dp[0]= nums[0];
dp[1] = max(nums[0],nums[1]);

for(int i = 2;i<n-1;i++){
    dp[i]= max(dp[i-1], nums[i]+dp[i-2]);
}
int ans=0;
    ans = dp[n-2];
     if(dp[n-2]>nums[n-1]+dp[n-3]){
        return ans;
     }   
     dp[n-1] = nums[n-1];
     dp[n-2] = max(nums[n-1],nums[n-2]);
     for(int i = n-3;i>0;i--){
        dp[i]= max(dp[i+1],nums[i]+ dp[i+2]);
     }
    if(dp[1]>ans){
        ans= dp[1];
     } 
return ans;
    }
};


// 1_ 2_ 3_ 4_ 5_ 6_ 

// 6_ 1_ 2_ 3_ 4_ 5_
