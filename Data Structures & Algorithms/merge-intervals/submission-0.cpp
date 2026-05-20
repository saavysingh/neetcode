class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n == 1) return intervals;

        sort(intervals.begin(),intervals.end());
        vector<vector<int>> answer;
        int i = 0;
        while(i<n){
            int start = intervals[i][0],
            end = intervals[i][1];
            int j = i+1;
            while(j<n && intervals[j][0]<=end){
                cout<<"j is "<<j;

                end = max(end,intervals[j][1]);
                j++;
            }
            answer.push_back({start,end});
            i=j;
        }
        return answer;
    }
};

// 1 -> return


// sort based on first index

// start - ith
// end - (max E)