class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0,j=numbers.size()-1;

        while(i<j){
            if(numbers[i] + numbers[j] == target){
                return {i+1,j+1};
            }
            else if(numbers[i] + numbers[j] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};

// [1,2,2,3,5]  target 5 -> [2,4]th index
// i        j
// {1,2, } -> target - 3,3

