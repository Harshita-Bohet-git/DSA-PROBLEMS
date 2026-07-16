class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq(26,0);
        int r = ransomNote.size();
        int m = magazine.size();
        for(int i = 0 ; i < m ; i++){
            freq[magazine[i]-'a']++;
        }
        for(int i = 0 ; i < r ; i++){
           if(freq[ransomNote[i]-'a']==0){
            return false;
           }
           else{
            freq[ransomNote[i]-'a']--;
           }
        }
        return true;
    }
};