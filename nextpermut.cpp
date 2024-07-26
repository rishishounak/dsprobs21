class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find the rightmost ascent
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Step 2: Find the smallest element greater than nums[i]
        int j = n - 1;
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }
        // Step 3: Swap elements at i and j
        std::swap(nums[i], nums[j]);
    }

    // Step 4: Reverse the sequence from i+1 to end
    std::reverse(nums.begin() + i + 1, nums.end());
}

    
};
