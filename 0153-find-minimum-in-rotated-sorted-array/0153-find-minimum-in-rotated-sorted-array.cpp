class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        int h = n - 1;
        int l = 0;

        while (l <= h) {
            int mid = (l + h) / 2;

            if (nums[l] <= nums[mid]) // means left is sorted
            {
                ans = min(
                    ans, nums[l]); // store smallest from the sorted part i.e.,l
                l = mid + 1;       // move right

            } else { // right part is sorted
                ans = min(
                    ans, nums[mid]); // store smallest from right part i.e., mid
                h = mid - 1;         // move left
            }
        }
        return ans;
    }
};