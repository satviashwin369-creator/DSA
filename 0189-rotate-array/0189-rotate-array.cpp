class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end()); // entire array reverse
        reverse(nums.begin(), nums.begin() + k);  //  only rotate upto k
        reverse(nums.begin() +  k, nums.end()); // from k to end of array
    }
};