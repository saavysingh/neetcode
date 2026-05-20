class Solution {

bool eatingBananas(vector<int>& piles, int h, int k){
    int totalHours = 0;
    for(int i : piles){
        if(i <= k){
            totalHours++;
        }
        else{
            double a = double(i)/k;
            totalHours += ceil(a);
        }
    }
    if(totalHours>h){
        return false;
    }
    return true;

}

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        if(h < n) return 0;
        if(h == n) return *max_element(piles.begin(),piles.end());

        int kMin = 1, kMax = *max_element(piles.begin(),piles.end()),mid,answer=kMax;
        while(kMin <= kMax){
            mid = kMin + (kMax-kMin)/2;
            if(eatingBananas(piles,h,mid)){
                answer=min(mid,answer);
                kMax = mid - 1;
            }else{
                kMin = mid + 1;
            }
        }

        return answer;

        
    }
};

// k = max pile./hour 
// h >= # piles -> h == #piles -> k = max(piles)

// k min = 1
// BS on k

// check if eating all bananas is possible

// [ 1,4,3,2] -> find #hours
// i : 1 -> h
// if(pile[i] <= k )    #hours = 1
// pile[i] > k      ceil(pile[i]/k) hours
// check #hours<h

// 123. 456