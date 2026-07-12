class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans = arr;
        sort(ans.begin(),ans.end());
        unordered_map<int,int>rank;
        int a = 1; 
        
        for(int i = 0 ; i<n ; i++){
        if(rank.find(ans[i]) == rank.end()) {
        rank[ans[i]] = a;
        a++;
    }      
 }  
    for(int i = 0 ; i<n ; i++){
        arr[i]=rank[arr[i]];
    }
    return arr;
    }
};