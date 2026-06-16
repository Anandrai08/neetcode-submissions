class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        int low = 0, high = n - 1;

        while (high >= 0 && nums[high] == val) {
            high--;
        }

        while (low <= high) {
            if (nums[low] == val) {
                swap(nums[low], nums[high]);
                high--;

                while (high >= low && nums[high] == val) {
                    high--;
                }
            } else {
                low++;
            }
        }

        return low;
    }
};