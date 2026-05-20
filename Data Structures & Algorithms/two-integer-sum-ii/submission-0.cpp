class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        if(n == 2){
            return {1,2};
        }
        int i = 0, j = n-1;
        while(i<j){
            if((numbers[i] + numbers[j]) == target){
                return {i+1,j+1};
            }
            else if((numbers[i] + numbers[j]) < target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};


// increasing / equal , target -> [a,b] a< b

// [1,4,4,8,9,10,10,23, 24] target 31
//  i                j

//  i + j = target => i+1,j+1
//  i + j < target => i++
//  i + j > target => j--