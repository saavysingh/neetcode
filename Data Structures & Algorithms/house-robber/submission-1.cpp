class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> money(n,0);
        if(n == 1){
            return nums[0];
        }
        if(n == 2){
            return max(nums[0],nums[1]);
        }
        money[0]= nums[0];
        money[1] = max(nums[0],nums[1]);
        for(int i =2;i<n;i++){
            money[i] = max(nums[i]+ money[i-2],money[i-1]);
            cout<<money[i]<<endl;
        }

        return money[n-1];
    }
};



//  _ _ _ _ _ _ _ _ -> nums[i] -> money of ith house
// goal: max money
//  condition -> i  X i-1 X i+1


//  ith house -> nums[i] + money(0->i-2) + money(i+2-> n)
//   4 0->2  6->9 


//   n == 1 -> nums[0]
//   n == 2 -> max(nums[0],nums[1])
//   n == 3 -> 2nd or 1st + 3rd

//   ith -> max(nums[i] + money(0->i-2), money(0->i-1))