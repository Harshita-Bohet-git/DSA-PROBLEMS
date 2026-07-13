class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum = nums[0]+nums[1]+nums[2];
        for(int i =0 ; i<n-2 ; i++){
            int left = i+1;
            int right = n-1;
            while(left < right){
                int add = nums[i]+nums[left]+nums[right];
                if(abs(add-target)<abs(sum-target)){
                    sum = add;
                }
                if(add==target){
                    return add;
                }
                else if(add<target){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return sum ; 
    }
};