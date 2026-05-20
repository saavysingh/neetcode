class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // if(n<=2) return cost[n-1];

        // return cost[n-1] + min(minCostClimbingStairs[n-2], minCostClimbingStairs[n-3]);
        
        vector<int> dp(n,0);
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i =2;i<n;i++){
            dp[i]= cost[i] + min(dp[i-1],dp[i-2]);
        }

        return min(dp[n-1], dp[n-2]);
    }
};
// 1 2 3


// _ -> cost[0]
// _ _ -> cost[0]+cost[1] or cost[1]

// _ _ _ -> min( floor(i-1), floor(i-2)) + cost[i]


