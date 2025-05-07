class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(),actSum = 0;
        int sum = n*(n+1)/2;
        for(int i = 0;i< n; i++){
            actSum += nums[i];
        }
        return sum - actSum;
    }
};