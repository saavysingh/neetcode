class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> triplets;
        sort(nums.begin(), nums.end());
        for(int i = 0 ;i<n-2;i++){
            cout<<"num[i] is "<<nums[i]<<endl;
            if(nums[i]>0){
                break;
            }
            while(i-1>=0 && i<n-2 && nums[i]==nums[i-1]){
                i++;
            }

            int j = i+1, k = n-1;
            while(j<k){
                if(nums[j] + nums[k] > -nums[i]){
                    k--;

                }else if(nums[j] + nums[k] < -nums[i]){
                   j++;

                }else{
                    triplets.push_back({nums[i],nums[j],nums[k]});
                    j++;k--;
                                     while(nums[k]==nums[k+1]){
                    k--;
                   }
                                   while(nums[j]==nums[j-1]){
                    j++;
                   }
                }

            }

        }
        return triplets;
    }
};


// nums=[-1,-1,0,1]

// -4 -> find two numbers with sum = 4

// for each num:

// search for two numbers with sum = -num

// increment and find the next diff num

