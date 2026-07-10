class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0 ; 
        int curr = 0 ;
        int ans = INT_MAX ; 
        for(int right = 0 ; right<nums.size();right++){
            curr += nums[right];
            while(curr>=target){
                ans = min(ans,right-low+1);
                curr -= nums[low];
                low++;
            }
        }
        if(ans==INT_MAX){
            return 0 ;
        }
        return ans;      
      
    }
};