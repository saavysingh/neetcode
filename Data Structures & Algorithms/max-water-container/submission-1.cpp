class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size()-1;
        int maxArea =  (j-i)*min(heights[i],heights[j]);

        while(i<j){
            if(heights[i]<heights[j]){
                int leftHeight = heights[i];
                i++;
                while(i<j && heights[i]<=leftHeight){
                    i++;
                }
            }
            else{
                int rightHeight = heights[j];
                j--;
                while(i<j && heights[j]<=rightHeight){
                    j--;
                }
            }
            maxArea= max(maxArea,(j-i)*min(heights[i],heights[j]));
        }
        return maxArea;
    }
};


// maxArea = (j-i)*min(hieghts[i],heights[j])

// i                   j 

// move smaller height
// if left -> move right to the bar greater than currheight
// else right -> move left to the bar greater than currheight

// update maxAre with curArea;
