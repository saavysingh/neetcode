class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n < 3){
            return 0;
        }
        vector<int> left(n,0);
        vector<int> right(n,0);
        int total = 0, leftPeak = height[0], rightPeak = height[n-1];

        for(int i = 1;i<n;i++){
            if(height[i]>= leftPeak){
                leftPeak = height[i];
            }
                left[i] = leftPeak;
            
        }
        for(int i = n-2;i>=0;i--){
            if(height[i]>= rightPeak){
                rightPeak = height[i];
            }
                right[i] = rightPeak;
        }

        for(int i = 0 ;i<n ;i++){
            int water = min(left[i],right[i]) - height[i];
            if(water>0){
                total+= water;
            }
        }
        return total;
    }
};
// [0,2,0,3,1,0,1,3,2,1]
// [0,2,2,3,3,3,3,0,3,3] left = 2
// [3,3,3,3,3,3,3,0,2,1] right = 3


// min(left,right) - height[i]