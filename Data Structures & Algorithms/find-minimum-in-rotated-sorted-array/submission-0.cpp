class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        if(n == 1 || nums[0]<nums[n-1]) return nums[0];

        int left = 0, right = n-1, mid;
        while(left<right){
            mid = (left + right)/2;
            if(nums[mid]>nums[right]){
                left = mid +1;
            }
            else {
                right = mid;
            }
        }

        return nums[left];
        
    }
};

