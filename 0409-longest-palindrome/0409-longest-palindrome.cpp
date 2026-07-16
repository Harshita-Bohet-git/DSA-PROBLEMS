class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char,int>freq;
        for(int i = 0 ; i<n ; i++){
            freq[s[i]]++;
        }
        int length = 0 ;
        bool oddfound = false; 
        for(auto &p : freq ){
            if(p.second%2==0){
                length += p.second;
            }
            else{
                length += p.second-1;
                oddfound=true;
            }
        }
        if(oddfound){
        length+=1;
        }
        return length;
    }
};