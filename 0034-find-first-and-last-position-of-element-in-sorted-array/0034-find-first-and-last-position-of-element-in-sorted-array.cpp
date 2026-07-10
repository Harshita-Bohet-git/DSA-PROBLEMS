class Solution {


private:
 int firstOCC(vector<int>& nums, int target){
    int low = 0 ;
    int high = nums.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            ans = mid ; 
            high = mid-1;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans ;
 }

int lastOcc(vector<int>& nums, int target){
    int low = 0 ;
    int high = nums.size()-1;
    int ans1 = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target){
            ans1 = mid ;
            low = mid+1;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans1;
}
  
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = firstOCC(nums,target);
        if(a==-1)return {-1,-1};
        int b = lastOcc(nums, target);
        return {a,b};
    }
};