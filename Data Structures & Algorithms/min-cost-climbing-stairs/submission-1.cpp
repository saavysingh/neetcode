class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // if(n<=2) return cost[n-1];

        // return cost[n-1] + min(minCostClimbingStairs[n-2], minCostClimbingStairs[n-3]);
        
        int one,two;
        one = cost[0];
        two = cost[1];

        for(int i =2;i<n;i++){
            int cur = cost[i] + min(one,two);
            one = two;
            two = cur;
        }

        return min(one,two);
    }
};
// 1 2 3


// _ -> cost[0]
// _ _ -> cost[0]+cost[1] or cost[1]

// _ _ _ -> min( floor(i-1), floor(i-2)) + cost[i]


