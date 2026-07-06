class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int left =1;
    int right = *max_element(piles.begin(), piles.end());

    while(left <= right){
        int mid = left + (right - left)/2;
        if(canEat(piles,mid, h)){
            right = mid -1;
        }
        else{
            left = mid+1;
        }
    }
    return left;

    }

    bool canEat(vector<int> piles, int s, int h){
        long long hours =0;
        for(int pile : piles){
            hours +=(pile +s -1)/s;
        }
        return hours<=h;
    }
};
