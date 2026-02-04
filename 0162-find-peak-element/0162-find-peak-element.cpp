class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();

        // three edge cases reducing our search space also by reducing high and low
        if (n == 1)
            return 0;
        if (nums[n - 1] > nums[n - 2])
            return n - 1;
        if (nums[0] > nums[1])
            return 0;

        int low = 1;
        int high = n - 2;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
                return mid;
            if (nums[mid] > nums[mid - 1])
                // peak surely existes in right side//move right
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1; // index not found
    }
};