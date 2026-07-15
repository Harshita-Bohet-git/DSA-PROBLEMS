class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0 ; 
        for(int i = 0 ; i<n ; i++){
            if(n>0){
                total += nums[i];
            }
        }
        int leftSum = 0 ;
        for(int i = 0 ; i < n ; i++){
            int rightsum = total - leftSum - nums[i];
            if(leftSum==rightsum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};