class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] < 0)
                left = mid + 1;
            else
                right = mid - 1;
        }

        int negatives = left;

        // First positive number
        left = 0;
        right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] <= 0)
                left = mid + 1;
            else
                right = mid - 1;
        }

        int positives = n - left;

        return max(negatives, positives);
    }
};