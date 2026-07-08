class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 ; 
        int el2 ;
        int n = nums.size();

        
        for(int i = 0; i < n; i++) {
            if(el1 == nums[i]) {
                cnt1++;
            }
            else if(el2 == nums[i]) {
                cnt2++;
            }
            else if(cnt1 == 0) {
                el1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0) {
                el2 = nums[i];
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        
        cnt1 = 0; cnt2 = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == el1) cnt1++;
            if(nums[i] == el2) cnt2++;
        }

        vector<int> ls;
        int mini = n/3 + 1;
        if(cnt1 >= mini) ls.push_back(el1);
        if(cnt2 >= mini) ls.push_back(el2);

        sort(ls.begin(), ls.end());
        return ls;
    }
};
