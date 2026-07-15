class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int n = gain.size();
       int currAlt = 0 ; 
       int maxAlt = 0 ;
       for(int i = 0 ; i < n ; i++){
        {
            currAlt += gain[i];
            maxAlt = max(currAlt , maxAlt);
        }
       }
       return maxAlt;
    }
};