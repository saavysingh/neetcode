class Solution {
public:
    int maxArea(vector<int>& heights) {

        int i = 0,j=heights.size()-1;
        int area = (j-i) * min(heights[i],heights[j]);
        while(i<j){
            if(heights[i] <= heights[j]){
                while(i<j && heights[i+1]<=heights[i]){
                    i++;
                }
                i++;
            }
            else{
                while(i<j && heights[j-1]<=heights[j]){
                    j--;
                }
                j--;
            }
         if(i<j){   
        int curArea = (j-i) * min(heights[i],heights[j]);
        area = max(area,curArea);
         }
        }       
        return area;
    }
};

