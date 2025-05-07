class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=1;
        int count=0;
        int diff;
        set<pair<int ,int>>ans;
        sort(nums.begin(),nums.end());
        while(j<n){
            diff= nums[j] - nums[i];
            if(diff==k){
                ans.insert({nums[i],nums[j]});
                i++,j++;
            }
            else if(diff>k){
                i++;
            }
            else{
                j++;
            }
            if(i==j) j++;
        }
        return ans.size();
    }
};