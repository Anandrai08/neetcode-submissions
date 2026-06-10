class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans;
        for(int i=0;i<nums.size();i++){
            ans = target - nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==ans){
                    return {i,j};
                }
            }
        }
return {};
    }
};
