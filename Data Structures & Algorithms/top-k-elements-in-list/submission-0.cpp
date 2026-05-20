class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> answer;
        unordered_map<int,int> hmap;
        for(int i : nums){
            if(hmap.find(i) == hmap.end()){
                hmap[i] = 1;
            }
            else{
                hmap[i]++;
            }
        }
        // hmap -> all distint values with their freq
        // sort all frequencies in decreasing order
        priority_queue<pair<int,int>> pq;

        for(auto i: hmap){
            pq.push(make_pair(i.second,i.first));
        }

        while(k>0){
            answer.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return answer;
    }
};


// if k = 1 -> most freq 
// k = 2 -> top 2 most freq
// k = n -> all (distinct)

// how to find most freq
// -> sort by freq or 

// hash map
//  value : freq  
