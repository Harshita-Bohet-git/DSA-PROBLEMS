class Solution {

private :
    vector<int>gatherRow(int numRows){
        long long ans = 1; 
        vector<int>ans2;
        ans2.push_back(1);
        for(int i = 1 ; i < numRows ; i++){
            ans = ans*(numRows-i);
            ans = ans/i;
            ans2.push_back(ans);
        }
        return ans2;
    }
public:

    vector<vector<int>> generate(int numRows) {
    
        vector<vector<int>>ans1;
        for(int col = 1; col <= numRows ; col++){
            ans1.push_back(gatherRow(col));

        }
        return ans1;

    }
};