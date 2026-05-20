class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n == 1){
            return 0;
        }
        int result=0;
        sort(intervals.begin(),intervals.end());
        int prevEnd = intervals[0][1];
        for(int i =1;i<n;i++){
            int start = intervals[i][0], end = intervals[i][1];
            if(start<prevEnd){
                result++;
                prevEnd=min(prevEnd,end);
            }
            else{
                prevEnd = end;
            }
        }
        return result;
        
    }
};







