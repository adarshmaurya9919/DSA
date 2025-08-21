class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];  // Stores the maximum sum
        int currentSum = 0;    // Stores the current subarray sum

        for (int num : nums) {
            // If currentSum is negative, reset it to 0
            if (currentSum < 0) 
                currentSum = 0;

            // Add current element to currentSum
            currentSum += num;

            // Update maxSum if we found a new max
            maxSum = max(maxSum, currentSum);
        }

        return maxSum; // Return the maximum subarray sum
    }
};
