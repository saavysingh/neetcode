class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> posSpeed;
        int n = position.size();
        for(int i = 0;i<n;i++){
            posSpeed.push_back({position[i],speed[i]});
        }
        sort(posSpeed.begin(),posSpeed.end());
        vector<float> time;
        for(auto i : posSpeed){
            time.push_back(float(target - i.first)/float(i.second));
        }

        stack<float> st;
        st.push(time[n-1]);
        int counter = 1;
        for(int i = n-2;i>=0;i--){
            if(time[i]<=st.top()){
                continue;
            }else{
                counter++;
                st.push(time[i]);
            }
        }
        return counter;
    }
};
// [4,1,0,7]   
// [2,2,1,1]
// hours to reach target:
// [3,4.5,10,3]

// [0,1,4,7]
// [10,4.5,1,3,2,3]

// 3 to st : skip all <= 3
// 4.5 to stack : skip all<=4.5
// 10

// return length of stack;